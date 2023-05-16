#include <iostream>

using namespace std;

class Graph {
private:
    int ** adjacency;
    int max;
public:
    // constructor
    Graph(int get_max) {
        // getting the max element
        max = get_max + 1;

        // dynamically creating 2D array for graph adjacency
        adjacency = new int*[max];
        for(int i = 0; i < max; i++) {
            adjacency[i] = new int[max];
        }

        // assigning 0 to every element
        for(int i = 0; i < max; i++) {
            for(int j = 0; j < max; j++) {
                adjacency[i][j] = 0;
            }
        }
    }

    // destructor
    ~Graph() {
        for(int i = 0; i < max; i++) {
            delete[] adjacency[i];
        }
        delete[] adjacency;
    }

    // adding edge to adjacency array
    void add_edge(int element, int adjacent_element) {
        adjacency[element][adjacent_element] = 1;
        adjacency[adjacent_element][element] = 1;
    }

    // removing edge from adjacency array
    void remove_edge(int element, int adjacent_element) {
        adjacency[element][adjacent_element] = 0;
        adjacency[adjacent_element][element] = 0;
    }

    // printing adjacency matrix of graph
    void print_adjacency_matrix() {
        cout << "\\ ";
        for(int i = 0; i < max; i++) {
            cout << i << " ";
        }
        cout << "\n";
        for(int i = 0; i < max; i++) {
            cout << i << " ";
            for(int j = 0; j < max; j++) {
                cout << adjacency[i][j] << " ";
            }
            cout << "\n";
        }
    }

    // printing elements of graph and adjacent elements
    void print_graph() {
        for(int i = 0; i < max; i++) {
            if(adjacency[i + 1] != 0) {
                cout << "element: " << i << " --> ";
            }
            for(int j = 0; j < max; j++) {
                if(adjacency[i][j] != 0) {
                    cout <<  j << " ";
                }
            }
            cout << "\n";
        }
    }
};

int main() {
    const int max = 4;
    Graph * graph = new Graph(max);

    // adding edges to graph
    graph->add_edge(0, 1);
    graph->add_edge(0, 4);
    graph->add_edge(2, 3);
    graph->add_edge(1, 3);
    graph->add_edge(1, 4);
    graph->add_edge(2, 3);
    graph->add_edge(3, 4);

    cout << "Printing adjacency matrix of graph: " << "\n";
    graph->print_adjacency_matrix();
    cout << "Printing graph elements with their adjacency: " << "\n";
    graph->print_graph();
    cout << "\n";

    cout << "Removing some of the edges and printing adjacency matrix of graph again: " << "\n";
    graph->remove_edge(0, 4);
    graph->remove_edge(2, 3);
    graph->remove_edge(1, 4);
    graph->print_adjacency_matrix();
    cout << "Printing graph elements with their adjacency again: " << "\n";
    graph->print_graph();

    graph->~Graph();
}