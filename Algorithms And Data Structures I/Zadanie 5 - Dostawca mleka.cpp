#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

// znalezienie dystansu do najdalszej wioski
int find_farthest_village(int n, vector<int> adjacency[], vector <int> villages,  int start) {
    // zaalokowanie zmiennych
    queue <int> villages_queue;
    int max_distance = 0;
    int distance[n];
    bool visited[n];

    // ustawienie domyślnych wartości
    for (int i = 0; i < n; i++) {
        distance[i] = 1000;
        visited[i] = false;
    }

    // ustawienie wartości startowych
    distance[start] = 0;
    visited[start] = true;
    villages_queue.push(start);
    
    // znalezienie dystansu do najdalszej wioski
    while(!villages_queue.empty()) {
        // ustaw current na przód kolejki
        int current = villages_queue.front();
        // wyrzuć wierzchołek
        villages_queue.pop();
        // przechodzenie po sąsiadach wioski
        for(int i : adjacency[current]) {
            // jeśli jest nieodwiedzony
            if(!visited[i]) {
                // dodaj do dystansu + 1
                distance[i] = distance[current] + 1;
                for(int j : villages) {
                    if(i == j) {
                        // jeśli dystans jest większy od maksymalnego, to:
                        if(distance[i] > max_distance) {
                            // zmień maksymalny dystans
                            max_distance = distance[i];
                        }
                    }
                }
                // zapisz odwiedzony wierzchołek
                villages_queue.push(i);
                visited[i] = true;
            }
        }
    }
    // zwróć maksymalny dystans
    return max_distance;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    int n;              // liczba wiosek                - n = <1, 30000>
    int m;              // liczba odwiedzanych wiosek   - m = <1, 100>

    // wprowadzenie liczby wiosek i liczby odwiedzanych wiosek
    cin >> n;
    cin >> m;

    // utworzenie mapy i wektora wiosek
    map <string, int> villages_map;
    vector <int> adjacency[n];
    vector <int> villages;

    // wprowadzenie wiosek do mapy villages_map
    string input;
    for(int i = 0; i < n; i++) {
        cin >> input;
        villages_map[input] = i;
    }

    // wprowadzenie sąsiadów wiosek do wektora adjacency
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> input;
            if(input == "X") {
                break;
            } else {
                adjacency[i].push_back(villages_map[input]);
            }
        }
    }

    // wioska startowa
    int start;
    cin >> input;
    start = villages_map[input];

    // wioski docelowe
    for(int i = 0; i < m; i++) {
        cin >> input;
        villages.push_back(villages_map[input]);
    }

    // liczba odwiedzonych wiosek podczas podróży do najodleglejszej wioski
    int distance = find_farthest_village(n, adjacency, villages, start);

    // wyświetlenie odpowiedzi
    cout << distance;

    return 0;
}
