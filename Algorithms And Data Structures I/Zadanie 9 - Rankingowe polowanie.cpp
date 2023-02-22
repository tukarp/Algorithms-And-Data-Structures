#include <iostream>

using namespace std;

// struktura myśliwego
struct Hunter {
    string name;
    int hunted_crabs;
    int traps_taken;
};

// sortowanie przez zliczanie ilosci upolowanych krabów i wziętych pułapek
void counting_sort(int n, Hunter * hunters) {
    // znalezienie największych elementów z tablicy upolowanych krabów i wziętych pułapek
    unsigned int max_hunted_crabs = 0;
    unsigned int max_traps_taken = 0;
    for(int i = 0; i < n; i++) {
        if(max_hunted_crabs < hunters[i].hunted_crabs) {
            max_hunted_crabs = hunters[i].hunted_crabs;
        } if(max_traps_taken < hunters[i].traps_taken) {
            max_traps_taken = hunters[i].traps_taken;
        }
    }

    // zwiększenie ilości o 1, ponieważ indeksy zaczynamy od 0
    max_hunted_crabs++;
    max_traps_taken++;

    // tablica do zliczania elementów
    string counting_sort_array[max_hunted_crabs][max_traps_taken];

    // zliczanie elementów
    for(int i = 0; i < n; i++) {
        if(!counting_sort_array[hunters[i].hunted_crabs][hunters[i].traps_taken].empty()) {
            counting_sort_array[hunters[i].hunted_crabs][hunters[i].traps_taken] += " " + hunters[i].name;
        } else {
            counting_sort_array[hunters[i].hunted_crabs][hunters[i].traps_taken] = hunters[i].name;
        }
    }

    // przechodzenie po tablicy elementów i wyświetlenie odpowiedzi
    for(int i = max_hunted_crabs - 1; i >= 0; i--) {
        for(int j = 0; j < max_traps_taken; j++) {
            if(!counting_sort_array[i][j].empty()) {
                cout << counting_sort_array[i][j] << " ";
            }
        }
    }
}

int main() {
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    // liczba myśliwych - zestawów danych
    int n;

    // wprowadzenie ilości myśliwych
    cin >> n;

    // zrobienie tablicy struktur myśliwych
    Hunter hunters[n];

    // wprowadzenie danych
    for(int i = 0; i < n; i++) {
        cin >> hunters[i].name >> hunters[i].hunted_crabs >> hunters[i].traps_taken;
    }

    // sortowanie przez zliczanie
    counting_sort(n, hunters);

    return 0;
}
