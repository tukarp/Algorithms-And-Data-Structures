// Made by https://github.com/tukarp
// Credit goes to: https://www.geeksforgeeks.org/selection-sort/

#include <iostream>

using namespace std;

void selection_sort(int size, int array[]) {
    for(int i = 0; i < size - 1; i++) {
        int min_index = i;
        for(int j = i + 1; j < size; j++) {
            if(array[j] < array[min_index]) {
                min_index = j;
            }
        } if(min_index != i) {
            swap(array[min_index], array[i]);
        }
    }
}

int main() {
    const int size = 10;
    int array[size] = {5, 20, 40, 100, 97, 23, 2, -20, -92, -37};

    cout << "Printing array before sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    cout << "Sorting array \n";
    selection_sort(size, array);

    cout << "Printing array after sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}
