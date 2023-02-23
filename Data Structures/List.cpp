// Made by https://github.com/tukarp

#include <iostream>
#include <string>

using namespace std;

class List {
private:
    struct element {
        string value;
        element * next;
    };
    element * first;
public:
    // constructor
    List() {
        first = NULL;
    }

    // destructor
    ~List() {
        element * temp;
        while(first != NULL) {
            temp = first;
            first = first -> next;
            delete temp;
        }
    }

    // getting first element of the list
    string front() {
        return first -> value;
    }

    // getting last element of the list
    string back() {
        element * it = first;
        while(it -> next != NULL) {
            it = it -> next;
        }
        return it -> value;
    }

    // adding element to the start of the list
    void push(string new_value) {
        element * temp = new element;
        temp -> value = new_value;
        temp -> next = first;
        first = temp;
    }

    // adding element to the end of the list
    void append(string new_value) {
        if(first == NULL) {
            push(new_value);
        } else {
            element * it = first;
            while(it -> next != NULL) {
                it = it -> next;
            }
            it -> next = new element;
            it -> next -> value = new_value;
            it -> next -> next = NULL;
        }
    }

    // remove element from the start of the list
    void pop_front() {
        element * temp = first;
        first = first -> next;
        delete temp;
    }

    // remove element from the end of the list
    void pop_back() {
        if(first -> next == NULL) {
            delete first;
            first = NULL;
        } else {
            element * it = first;
            while(it -> next -> next != NULL) {
                it = it -> next;
            }
            delete it -> next;
            it -> next = NULL;
        }
    }

    // checking if list is empty
    bool is_empty() {
        if(first == NULL) {
            return true;
        } else {
            return false;
        }
    }

    // inserting element after given element
    void insert(element * previous, string new_value) {
        if(previous != NULL) {
            element * temp = previous -> next;
            previous -> next = new element;
            previous -> next -> next = temp;
            previous -> next -> value = new_value;
        } else {
            push(new_value);
        }
    }

    // erase element after given element
    void erase(element * previous) {
        if(previous != NULL) {
            element * temp = previous -> next;
            previous -> next = temp -> next;
            delete temp;
        } else {
            pop_front();
        }
    }

    // getting value with given index
    string get_value_from_index(int index) {
        int index_counter = 0;
        if(first -> next == NULL) {
            return NULL;
        } else {
            element * it = first;
            while((it -> next -> next != NULL) && (index_counter != index)) {
                it = it -> next;
            }
            return it -> value;
        }
    }

    // getting value after given element
    string next(element * previous) {
        if(previous == NULL) {
            return first -> value;
        } else {
            return previous -> next -> value;
        }
    }

    // printing the list
    void print() {
        if(first == NULL) {
            cout << first -> value << "\n";
        } else {
            unsigned int index_counter = 0;
            element * it = first;
            while(it != NULL) {
                cout << "index:" << index_counter << " value: " << it -> value << "\n";
                it = it -> next;
                index_counter++;
            }
        }
    }

};

int main() {
    List * list = new List();
    unsigned int number_of_elements;

    cout << "How many elements do you want to add? " << "\n";
    cin >> number_of_elements;
    for(int i = 0; i < number_of_elements; i++) {
        string temp;
        cin >> temp;
        list->append(temp);
    }

    cout << "Printing the list: " << "\n";
    list->print();

    cout << "Getting value from index: " << "\n";
    cout << list->get_value_from_index(number_of_elements) << "\n";

    cout << "Pushing element: " << "\n";
    list->push("10");
    list->print();

    cout << "First element from the list: " << "\n";
    cout << list->front() << "\n";

    cout << "Deleting first element from the list " << "\n";
    list->pop_front();
    list->print();

    cout << "Last element from the list: " << "\n";
    cout << list->back() << "\n";

    cout << "Deleting last element from the list " << "\n";
    list->pop_back();
    list->print();

    cout << "Is list empty? " << "\n";
    cout << list->is_empty();

    list->~List();

    return 0;
}
