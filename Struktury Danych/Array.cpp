#include <iostream>

using namespace std;

struct Node {
    int value;
    int index;
};

class Array {
private:
    int size;
    Node * elements;
public:
    // constructor
    Array(int size) {
        this->size = size;
        elements = new Node[size];
        for(int i = 0; i < size; i++) {
            elements[i].value = 0;
            elements[i].index = i;
        }
    }

    // destructor
    ~Array() {
        delete[] elements;
    }

    // set value with given index of the array
    void set_element(int value, int index) {
        if((index >= 0) && (index < size)) {
            elements[index].value = value;
        } else {
            cout << "Index out of range error " << "\n";
        }
    }

    // get value with given index of the array
    int get_element(int index) {
        if((index >= 0) && (index < size)) {
            return elements[index].value;
        } else {
            NULL;
        }
    }

    // delete element with given index of the array
    void delete_element(int index) {
        if((index >= 0) && (index < size)) {
            elements[index].value = NULL;
        } else {
            cout << "Index out of range error " << "\n";
        }
    }

    // printing element with given index of the array
    void print_element(int index) {
        if((index >= 0) && (index < size)) {
            cout << elements[index].value << "\n";
        } else {
            cout << "Index out of range error " << "\n";
        }
    }

    // checking if array is empty
    bool is_empty() {
    int empty_counter = 0;
        for(int i = 0; i < size; i++) {
            if(elements[i].value != 0) {
                empty_counter++;
            }
        } if(empty_counter == size - 1) {
            return true;
        } else {
            return false;
        }
    }

    // getting the size of the array
    int get_size() {
        return size;
    }

    // printing the actual size of the queue
    void print_size() {
        cout << "Size: " << size << "\n";
    }

    // printing all elements of the queue
    void print() {
        for(int i = 0; i < size; i++) {
            cout << "Index: " << elements[i].index << " Value: " << elements[i].value << "\n";
        }
    }
};

int main() {
    const int size = 10;
    Array * array = new Array(10);

    // adding elements to the array
    array->set_element(5, 9);
    array->set_element(2, 3);
    array->set_element(9, 0);
    array->set_element(4, 2);
    array->set_element(0, 5);

    cout << "Printing elements of the array: \n";
    array->print();

    cout << "Printing size and deleting elements on the size - 1 index: \n";
    array->print_size();
    array->delete_element(array->get_size() - 1);

    cout << "Checking if array is empty: \n";
    cout << array->is_empty();
    cout << "\n";

    cout << "Getting element on the index 0 and deleting it: \n";
    cout << array->get_element(0);
    array->delete_element(0);
    cout << "\n";

    cout << "Printing elements of the array: \n";
    array->print();

    array->~Array();

    return 0;
}
