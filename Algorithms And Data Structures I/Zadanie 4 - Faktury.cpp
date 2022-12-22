#include <iostream>
#include <string>

using namespace std;

// lisc w drzewie binarnym
struct Node {
    string data;
    Node * left;
    Node * right;
    int counter = 0;

    Node(string data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

// drzewo binarne
class Binary_tree {
private:
    Node * root;

public:

    // Utworzenie drzewa
    Binary_tree() {
        root = NULL;
    }

    void insert(string new_data) {
        if(root == NULL) {
            root = new Node(new_data);
        } else {
            insert(new_data, root);
        }
    }

    // wprowadzanie danych do drzewa
    void insert(string new_data, Node * leaf) {
        if(new_data < leaf -> data) {
            if(leaf -> left != NULL) {
                insert(new_data, leaf -> left);
            } else {
                leaf -> left = new Node(new_data);
            }
        } else if(new_data > leaf -> data) {
            if(leaf -> right != NULL) {
                insert(new_data, leaf -> right);
            } else {
                leaf -> right = new Node(new_data);
            }
        } else {
            leaf -> counter++;
        }
    }

    void print() {
        print(root);
        cout << '\n';
    }

    // wyswietlenie drzewa od najmniejszego elementu do najwiekszego
    void print(Node * leaf) {
        if(leaf != NULL) {
            print(leaf -> left);

            for(int i = 0; i < leaf -> counter + 1; i++) {
                cout << leaf -> data << '\n';
            }

            print(leaf -> right);
        }
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    unsigned int n; // n - ilosc faktur, zakres <0, 3000000>
    Binary_tree * drzewo_binarne = new Binary_tree(); // utowrzenie drzewa binarnego

    // pobranie ilosci faktur
    cin >> n;

    // wprowadzanie zmiennych do drzewa
    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        drzewo_binarne -> insert(temp);
    }

    // wyswietlenie danych
    drzewo_binarne -> print();

    // usuniecie drzewa
    delete drzewo_binarne;

    return 0;
}