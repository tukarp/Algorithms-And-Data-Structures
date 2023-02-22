#include <iostream>
#include <string>

using namespace std;

// pojedynczy element drzewa
struct Node {
    string value;
    Node * left;
    Node * right;
    int counter = 0;
    Node(string value) {
        this -> value = value;
        left = NULL;
        right = NULL;
    }
};

// klasa drzewa binarnego
class Binary_tree {
private:
    Node * root;
public:
    // konstruktor
    Binary_tree() {
        root = NULL;
    }

    // destruktor
    ~Binary_tree() {
        delete root;
    }

    // dodawanie elementu do drzewa
    void insert(string new_value) {
        // jeśli drzewo jest puste dodaj element zamiast korzenia
        if(root == NULL) {
            root = new Node(new_value);
            // w przeciwnym przypadku wywołaj funkcję od korzenia
        } else {
            insert(new_value, root);
        }
    }

    // dodawanie elementu do drzewa
    void insert(string new_value, Node * leaf) {
        // jeśli nowa wartość jest mniejsza od liścia
        if(new_value < leaf->value) {
            // jeśli lewy liść nie jest pusty
            if(leaf->left != NULL) {
                // wywołaj insert() od lewego liścia
                insert(new_value, leaf->left);
                // w przeciwnym przypadku dodaj wartość do lewego liścia
            } else {
                leaf->left = new Node(new_value);
            }
            // jeśli nowa wartość jest większa od liścia
        } else if(new_value > leaf->value) {
            // jeśli prawy liść nie jest pusty
            if(leaf->right != NULL) {
                // wywołaj insert() od prawego liścia
                insert(new_value, leaf->right);
                // w przeciwnym przypadku dodaj wartość do prawego liścia
            } else {
                leaf->right = new Node(new_value);
            }
            // jeśli wartość jest taka sama to inkrementuj licznik dla danego liścia
        } else {
            leaf->counter++;
        }
    }

    // zacznij wyświetlać zawartość drzewa
    void print() {
        print(root);
        cout << '\n';
    }

    // wyświetl zawartość drzewa
    void print(Node * leaf) {
        // jeśli liść nie jest zerem idź dalej
        if(leaf != NULL) {
            // najpierw wyświetl lewy liść
            print(leaf->left);
            // potem wyświetl wartość elementu tyle razy ile ma zapisane w zmiennej counter
            for(int i = 0; i < leaf->counter + 1; i++) {
                cout << leaf->value << '\n';
            }
            // na końcu wyświetl prawy liść
            print(leaf->right);
        }
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    unsigned int n;             // ilość faktur - n = <0, 3000000>

    // wprowadzenie ilości faktur
    cin >> n;

    // wprowadzenie danych do drzewa
    Binary_tree * binary_tree = new Binary_tree();
    string input;
    for(int i = 0; i < n; i++) {
        cin >> input;
        binary_tree->insert(input);
    }

    // wyświetlenie zawartości drzewa
    binary_tree->print();

    // zwolnienie pamięci
    binary_tree->~Binary_tree();

    return 0;
}
