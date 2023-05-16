#include <iostream>
#include <string>

using namespace std;

struct Node {
    string data;
    int index;
    struct Node * next;
};

class Circular_Linked_List {
private:
    Node * head;
    Node * tail;
    int list_size = 0;
public:
    // constructor
    Circular_Linked_List() {
        head = new Node;
        head -> index = 0;
        head -> next = NULL;
    }

    // destructor
    ~Circular_Linked_List() {
        Node * temp;
        while(head != NULL) {
            temp = head;
            head = head -> next;
            delete temp;
        }
    }
    // checking if the list is empty
    bool is_empty() {
        if(head == NULL) {
            return true;
        } else {
            return false;
        }
    }

    // getting first element of the list
    string front() {
        return head -> data;
    }

    // getting last element of the list
    string back() {
        return tail -> data;
    }

    // getting index of the first element
    int first() {
        return 0;
    }

    // getting index of the last element
    int last() {
        if(head -> next == NULL) {
            return NULL;
        } else {
            Node * it = head;
            while(it -> next -> next != NULL) {
                it = it -> next;
            }
            return it -> index;
        }
    }

    // getting element at given index
    string element_at_index(int at_index) {
        if(at_index > list_size) {
            return "Index out of range error";
        } else {
            Node * it = head;
            while(it -> next -> index != at_index - 1) {
                it = it -> next;
            }
            return it -> data;
        }
    }

    // getting next element from given index
    string next_from_index(int at_index) {
        if(at_index + 1 > list_size) {
            return "Index out of range error";
        } else {
            Node * it = head;
            while(it -> next -> index != at_index) {
                it = it -> next;
            }
            return it -> next -> data;
        }
    }

    // getting previous element from given index
    string previous_from_index(int at_index) {
        if(at_index - 1 > list_size) {
            return "Index out of range error";
        } else {
            Node * it = head;
            while(it -> next -> index != at_index - 2) {
                it = it -> next;
            }
            return it -> next -> data;
        }
    }

    // adding element to the top of the list
    void push_front(string new_data) {
        Node * temp = new Node;
        temp -> data = new_data;
        temp -> next = head;
        head = temp;
        list_size++;
    }

    // adding element at the end of the list
    void push_back(string new_data) {
        if(head == NULL) {
            push_front(new_data);
        } else {
            Node * it = head;
            while(it -> next != NULL) {
                it = it -> next;
            }
            it -> next = new Node;
            it -> next -> data = new_data;
            it -> next -> next = head;
        }
        list_size++;
    }

    // removing element from the top of the list
    void pop_front() {
        Node * temp = head;
        head = head -> next;
        delete temp;

        Node * it = head;
        while(it -> next != NULL) {
            it = it -> next;
        }
        it -> next -> next = head;
        list_size--;
    }

    // removing element from the back of the list
    void pop_back() {
        if(head -> next == NULL) {
            delete head;
            head = NULL;
        } else {
            Node * it = head;
            int list_size = 0;
            while(it -> next -> next != NULL) {
                it = it -> next;
                list_size++;
            }
            delete it -> next;
            it -> next = head;
            it -> index = list_size;
        }
        list_size--;
    }

    // adding element at given index
    void insert(string new_data, int at_index) {
        Node * it = head;
        while(it -> next -> index != at_index - 1) {
            it = it -> next;
        }
        it -> data = new_data;
        it -> index = at_index;
        list_size++;
    }

    // removing element from given index
    void erase(int at_index) {
        Node * it = head;
        while(it -> next -> index != at_index - 1) {
            it = it -> next;
        }
        delete it;
        list_size--;
    }

    // getting size of list
    int get_list_size() {
        return list_size;
    }

    void print_list() {
        Node * it = head;
        while(it -> index != get_list_size() - 1) {
            cout << it -> data << "\n";
            it = it -> next;
        }
    }
};

int main() {
    Circular_Linked_List * circularLinkedList = new Circular_Linked_List();

    circularLinkedList->push_front("1");
    circularLinkedList->push_front("2");
    circularLinkedList->push_front("3");
  
    circularLinkedList->print_list();
    cout << circularLinkedList->get_list_size();
    
    return 0;
}