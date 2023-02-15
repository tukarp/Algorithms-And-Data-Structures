// Made by https://github.com/tukarp
// Credit goes to: https://www.geeksforgeeks.org/radix-sort/

#include <iostream>

using namespace std;

int get_max(int array[], int size) {
    int max = 0;
    for(int i = 1; i < size; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void counting_sort(int array[], int size, int exp) {
    int output_array[size];
    int count_array[size];
    int i;

    for(i = 0; i < size; i++) {
        count_array[i] = 0;
    } for(i = 0; i < size; i++) {
        count_array[(array[i] / exp) % 10]++;
    } for(i = 1; i < size; i++) {
        count_array[i] += count_array[i - 1];
    } for(i = size - 1; i >= 0; i--) {
        output_array[count_array[(array[i] / exp) % 10] - 1] = array[i];
        count_array[(array[i] / exp) % 10]--;
    } for(i = 0; i < size; i++) {
        array[i] = output_array[i];
    }
}

int radix_sort(int array[], int size) {
    int max = get_max(array, size);

    for(int exp = 1; (max / exp) > 0; exp *= 10) {
        counting_sort(array, size, exp);
    }
}

int main() {
    const int size = 10;
    int array[size] = {18, 51, 2, 83, 78, 3, 54, 30, 98, 66};

    cout << "Printing array before sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    cout << " ---------- \n";
    cout << "Sorting array \n";
    cout << " ---------- \n";
    radix_sort(array, size);

    cout << "Printing array after sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}
