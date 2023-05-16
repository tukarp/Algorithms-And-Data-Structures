#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int bucket_sort(float array[], int size) {
    vector<float> bucket[size];
    int i, j;

    for(i = 0; i < size; i++) {
        int bucket_index = size * array[i];
        bucket[bucket_index].push_back(array[i]);
    } for(i = 0; i < size; i++) {
        sort(bucket[i].begin(), bucket[i].end());
    }

    int index = 0;
    for(i = 0; i < size; i++) {
        for(j = 0; j < bucket[i].size(); j++) {
            array[index++] = bucket[i][j];
        }
    }
}

int main() {
    const int size = 10;
    float array[size] = {0.897, 0.565, 0.6562, 0.1234, 0.6651, 0.3434, 0.4512, 0.3421, 0.1421, 0.8649};

    cout << "Printing array before sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    cout << " ---------- \n";
    cout << "Sorting array \n";
    cout << " ---------- \n";
    bucket_sort(array, size);

    cout << "Printing array after sorting: \n";
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    return 0;
}