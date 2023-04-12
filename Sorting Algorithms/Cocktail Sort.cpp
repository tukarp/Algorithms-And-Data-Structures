// Made by https://github.com/tukarp
// Credit goes to: https://www.geeksforgeeks.org/cocktail-sort/

#include <iostream>

using namespace std;

void cocktail_sort(int array[], int size) {
    bool swapped = true;
    int start = 0;
    int end = size - 1;

    while(swapped) {
        swapped = false;
        for(int i = start; i < end; i++) {
            if(array[i] > array[i + 1]) {
                swap(array[i], array[i + 1]);
                swapped = true;
            }
        }

        if(!swapped) {
            break;
        } else {
            swapped = false;
            end--;
            for(int i = end - 1; i >= start; i--) {
                if(array[i] > array[i + 1]) {
                    swap(array[i], array[i + 1]);
                    swapped = true;
                }
            }
            start++;
        }
    }
}

int main() {
    const int size = 10;
    int array[size] = {57, 8, 28, 89, 18, 93, 28, 87, 99, 48};

    cout << "Printing array before sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    cout << " ---------- \n";
    cout << "Sorting array \n";
    cout << " ---------- \n";
    cocktail_sort(array, size);

    cout << "Printing array after sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}