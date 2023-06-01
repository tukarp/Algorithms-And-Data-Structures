#include <iostream>

using namespace std;

void counting_sort_print(int array[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "index: " << i << " value: " << array[i] << "\n";
    }
}

int counting_sort(int array[], int size) {
    int max_value = 0;

    for(int i = 0; i < size; i++) {
        if(array[i] > max_value) {
            max_value = array[i];
        }
    }

    max_value++;
    int counting_array[max_value];
    for(int i = 0; i < max_value; i++) {
        counting_array[i] = 0;
    } for(int i = 0; i < size; i++) {
        counting_array[array[i]]++;
    }

    cout << "Printing array after sorting: \n";
    counting_sort_print(counting_array, max_value);
}

int main() {
    const int size = 10;
    int array[size] = {9, 7, 7, 2, 4, 1, 6, 0, 2, 9};

    cout << "Printing array before sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    cout << " ---------- \n";
    cout << "Sorting array \n";
    cout << " ---------- \n";
    counting_sort(array, size);

    return 0;
}
