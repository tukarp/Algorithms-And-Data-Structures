#include <iostream>

using namespace std;

void shell_sort(int array[], int size) {
    for(int gap = size / 2; gap > 0; gap /= 2) {
        for(int i = gap; i < size; i++) {
            int temp = array[i];
            int j;
            for(j = i; (j >= gap) && (array[j - gap] > temp); j -= gap) {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }
    }
}

int main() {
    const int size = 10;
    int array[size] = {15, 90, 58, 22, 70, 99, 7, 0, 1, 72};

    cout << "Printing array before sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    cout << " ---------- \n";
    cout << "Sorting array \n";
    cout << " ---------- \n";
    shell_sort(array, size);

    cout << "Printing array after sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}
