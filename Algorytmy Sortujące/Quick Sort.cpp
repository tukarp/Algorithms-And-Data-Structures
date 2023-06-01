#include <iostream>

using namespace std;

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low - 1);

    for(int j = low; j < high; j++) {
        if(array[j] < pivot) {
            swap(array[i + 1], array[j]);
            i++;
        }
    }

    swap(array[i + 1], array[high]);
    return (i + 1);
}

void quick_sort(int array[], int low, int high) {
    if(low < high) {
        int partition_index = partition(array, low, high);
        quick_sort(array, low, partition_index - 1);
        quick_sort(array, partition_index + 1, high);
    } else {
        return;
    }
}

int main() {
    const int size = 10;
    int array[size] = {50, 78, 63, -29, 12, -66, 49, 6, -71, -68};

    cout << "Printing array before sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    cout << " ---------- \n";
    cout << "Sorting array \n";
    cout << " ---------- \n";
    quick_sort(array, 0, (size - 1));

    cout << "Printing array after sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}
