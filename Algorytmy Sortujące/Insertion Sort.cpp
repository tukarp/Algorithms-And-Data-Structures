#include <iostream>

using namespace std;

void insertion_sort(int size, int array[]) {
    for(int i = 0; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        while((j >= 0) && (array[j] > key)) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int main() {
    const int size = 10;
    int array[size] = {-38, -61, -90, -17, 38, 64, -66, 42, 8, 51};

    cout << "Printing array before sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    cout << " ---------- \n";
    cout << "Sorting array \n";
    cout << " ---------- \n";
    insertion_sort(size, array);

    cout << "Printing array after sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}