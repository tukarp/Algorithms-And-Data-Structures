#include <iostream>

using namespace std;

bool is_sorted(int array[], int size) {
    while(size-- > 1) {
        if(array[size] < array[size - 1]) {
            return false;
        } else {
            return true;
        }
    }
}

void shuffle(int array[], int size) {
    for(int i = 0; i < size; i++) {
        swap(array[i], array[rand() % size]);
    }
}

void bogo_sort(int array[], int size) {
    while(!is_sorted(array, size)) {
        shuffle(array, size);
    }
}

int main() {
    const int size = 10;
    int array[size] = {99, 21, 98, 19, 43, 55, 34, 89, 72, 0};

    cout << "Printing array before sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    cout << " ---------- \n";
    cout << "Sorting array \n";
    cout << " ---------- \n";
    bogo_sort(array, size);

    cout << "Printing array after sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}
