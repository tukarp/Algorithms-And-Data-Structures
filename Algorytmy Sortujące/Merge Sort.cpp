#include <iostream>

using namespace std;

void merge(int array[], int const left, int const mid, int const right) {
    int const subarray_one = mid - left + 1;
    int const subarray_two = right - mid;

    int * left_array = new int[subarray_one];
    int * right_array = new int[subarray_two];

    for(int i = 0; i < subarray_one; i++) {
        left_array[i] = array[left + i];
    } for(int j = 0; j < subarray_two; j++) {
        right_array[j] = array[mid + 1 + j];
    }

    int subarray_one_index = 0;
    int subarray_two_index = 0;
    int merged_array_index = left;

    while((subarray_one_index < subarray_one) && (subarray_two_index < subarray_two)) {
        if(left_array[subarray_two_index] <= right_array[subarray_two_index]) {
            array[merged_array_index] = left_array[subarray_one_index];
            subarray_one_index++;
        } else {
            array[merged_array_index] = right_array[subarray_two_index];
            subarray_two_index++;
        }
        merged_array_index++;
    }

    while(subarray_one_index < subarray_one) {
        array[merged_array_index] = left_array[subarray_one_index];
        subarray_one_index++;
        merged_array_index++;
    }

    while(subarray_two_index < subarray_two) {
        array[merged_array_index] = right_array[subarray_two_index];
        subarray_two_index++;
        merged_array_index++;
    }

    delete[] left_array;
    delete[] right_array;
}

void merge_sort(int array[], int const begin, int const end) {
    if(begin >= end) {
        return;
    } else {
        int mid = begin + (end - begin) / 2;
        merge_sort(array, begin, mid);
        merge_sort(array, (mid + 1), end);
        merge(array, begin, mid, end);
    }
}

int main() {
    const int size = 10;
    int array[size] = {-79, 62, 27, 69, 36, -89, 0, -79, -43, 68};

    cout << "Printing array before sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    cout << " ---------- \n";
    cout << "Sorting array \n";
    cout << " ---------- \n";
    merge_sort(array, 0, (size - 1));

    cout << "Printing array after sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}