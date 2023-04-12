// Made by https://github.com/tukarp

#include <iostream>

using namespace std;

void bubble_sort(int size, int array[]) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main() {
    const int size = 10;
    int array[size] = {66, -98, 91, 31, -99, 51, -37, 47, -100, 24};

    cout << "Printing array before sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    cout << " ---------- \n";
    cout << "Sorting array \n";
    cout << " ---------- \n";
    bubble_sort(size, array);

    cout << "Printing array after sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}