// Made by https://github.com/tukarp
// Credit goes to: https://www.geeksforgeeks.org/heap-sort/

#include <iostream>

using namespace std;

void heapify(int array[], int size, int i) {
    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;

    if((left < size) && (array[left] > array[largest])) {
        largest = left;
    } if((right < size) && (array[right] > array[largest])) {
        largest = right;
    } if(largest != i) {
        swap(array[largest], array[i]);
        heapify(array, size, largest);
    }
}

void heap_sort(int array[], int size) {
    for(int i = (size / 2) - 1; i >= 0; i--) {
        heapify(array, size, i);
    } for(int i = size - 1; i > 0; i--) {
        swap(array[0], array[i]);
        heapify(array, i , 0);
    }
}

int main() {
    const int size = 10;
    int array[size] = {87, -75, -73, -59, 69, -8, 88, -3, 49, -13};

    cout << "Printing array before sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    cout << " ---------- \n";
    cout << "Sorting array \n";
    cout << " ---------- \n";
    heap_sort(array, size);

    cout << "Printing array after sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}