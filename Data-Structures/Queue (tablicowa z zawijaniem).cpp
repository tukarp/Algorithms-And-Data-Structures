// Made by https://github.com/tukarp

#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
    unsigned int head;
    unsigned int tail;
    unsigned int size;
    string * elements;
public:
    // Constructor
    Queue() {
        head = 0;
        tail = 0;
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
        string temp = elements[head];
        head = (head + 1) % size;
        return temp;
    }

    // checking if queue is empty
    bool is_empty() {
        if(head == tail) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Queue * queue = new Queue();
    const int size = 5;

    // Adding elements to the queue:
    queue->push("0");
    queue->push("1");
    queue->push("2");
    queue->push("3");
    queue->push("4");

    cout << "Emptying the queue: " << endl;
    for(int i = 0; i < size; i++) {
        cout << i + 1 << ". Element of queue: " << queue->pop() << endl;
    }

    cout << "Checking if queue is empty: " << endl;
    cout << queue->is_empty();

    queue->~Queue();

    return 0;
}
