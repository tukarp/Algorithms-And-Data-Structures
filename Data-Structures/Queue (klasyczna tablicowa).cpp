// Made by https://github.com/tukarp

#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
    unsigned int head;
    unsigned int tail;
    unsigned int size;
    unsigned int elements_counter;
    string * elements;
public:
    // Constructor
    Queue() {
        head = 0;
        tail = 0;
        elements_counter = 0;
        size = 100;
        elements = new string[size];
    }

    // Destructor
    ~Queue() {
        delete[] elements;
    }

    // adding element at the end of the queue
    void push(string new_data) {
        elements[tail] = new_data;
        tail = (tail + 1) % size;
        elements_counter++;
        if(head == tail) {
            string * temp_array = new string[2 * size];
            unsigned int i = 0;
            do {
                temp_array[i] = elements[head];
                head = (head + 1) % size;
                i++;
            } while(head != tail);
            delete[] elements;
            elements = temp_array;
            head = 0;
            tail = size;
            size *= 2;
        }
    }

    // removing element from the top of the queue
    string pop() {
        string result = elements[0];
        for(int i = 0; i < elements_counter - 1; i++) {
            elements[i] = elements[i + 1];
        }
        elements[elements_counter - 1].clear();
        tail = elements_counter - 1;
        elements_counter--;
        return result;
    }

    // checking if queue is empty
    bool is_empty() {
        if(head == tail) {
            return true;
        } else {
            return false;
        }
    }

    // getting the actual size of the queue
    int get_actual_size() {
        return elements_counter;
    }

    // printing the actual size of the queue
    void print_size() {
        cout << "Size: " << elements_counter << endl;
    }

    // printing first element of the queue
    void print_front() {
        cout << "First element of the queue: " << elements[0] << endl;
    }

    // printing last element of the queue
    void print_back() {
        cout << "Last element of the queue: " << elements[elements_counter - 1] << endl;
    }

    // printing all elements of the queue
    void print() {
        unsigned int i = 0;
        while(i < elements_counter) {
            cout << "index:" << i << " data:" << elements[i] << endl;
            i++;
        }
        if(is_empty()) {
            cout << "---" << endl;
        }
    }
};

int main() {
    Queue * queue = new Queue();

    // Adding elements to the queue:
    queue->push("0");
    queue->push("1");
    queue->push("2");
    queue->push("3");
    queue->push("4");

    cout << "Printing different elements of the queue: " << endl;
    queue->print();
    queue->print_front();
    queue->print_back();
    queue->print_size();

    // emptying the queue
    cout << "Emptying the queue: " << endl;
    int size = queue->get_actual_size();
    for(int i = 0; i < size; i++) {
        cout << queue->pop() << endl;
    }

    cout << "Printing the queue and checking if it's empty: " << endl;
    queue->print();
    cout << queue->is_empty();

    queue->~Queue();

    return 0;
}