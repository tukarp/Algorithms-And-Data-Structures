// Made by https://github.com/tukarp

#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
    unsigned int size;
    unsigned int elements_counter;
    string * elements;
public:
    // constructor
    Stack() {
        size = 100;
        elements_counter = 0;
        elements = new string[size];
    }

    // destructor
    ~Stack() {
        delete[] elements;
    }
    
    // print element from the top of the stack
    void top() {
        cout << elements[elements_counter - 1] << "\n";
    }

    // adding element on the top of the stack
    void push(string new_data) {
        if(elements_counter == size) {
            string * temp_array = new string[2 * size];
            unsigned int i = 0;
            do {
                temp_array[i] = elements[elements_counter];
                elements_counter = (elements_counter + 1) % size;
            } while(elements_counter != size);
            delete [] elements;
            elements = temp_array;
            size *= 2;
        }
        elements[elements_counter] = new_data;
        elements_counter++;
    }

    // removing element from the top of the stack
    string pop() {
        string top = elements[elements_counter];
        elements[elements_counter].clear();
        elements_counter--;
        return top;
    }

    // checking if queue is empty
    bool is_empty() {
        if(elements_counter == 0) {
            return true;
        } else {
            return false;
        }
    }

    // getting size of the stack
    int get_size() {
        return elements_counter;
    }

    // print size of the stack
    void print_size() {
        cout << elements_counter << "\n";
    }

    void print() {
        if(is_empty()) {
            cout << "The stack is empty!" << "\n";
        } else {
            cout << "Top: " << "\n";
            for(int i = elements_counter - 1; i >= 0; i--) {
                cout << elements[i] << "\n";
            }
        }
    }
};

int main() {
    Stack * stack = new Stack();

    // adding elements to the stack:
    stack->push("1");
    stack->push("2");
    stack->push("3");
    stack->push("4");
    stack->push("5");

    cout << "Element at the top of the stack: " << "\n";
    stack->top();

    cout << "Size of the stack: " << "\n";
    stack->print_size();

    cout << "Emptying the stack: " << "\n";
    int size = stack->get_size();
    for(int i = 0; i < size; i++) {
        cout << "Printing the stack: " << "\n";
        stack->print();
        stack->pop();
    }

    cout << "Printing the stack and checking if it's empty: " << "\n";
    stack->print();
    cout << stack->is_empty();

    stack->~Stack();

    return 0;
}
