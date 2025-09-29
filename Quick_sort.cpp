#include <iostream>
using namespace std;

int partition_array(int arr[], int low, int high) {
    int pivot = arr[high];
    int smaller_index = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            smaller_index++;
            swap(arr[smaller_index], arr[j]);
        }
    }
    swap(arr[smaller_index + 1], arr[high]);
    return smaller_index + 1;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pivot_index = partition_array(arr, low, high);
        quick_sort(arr, low, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, high);
    }
}

int main() {
    int numbers[] = {10, 7, 8, 9, 1, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    quick_sort(numbers, 0, length - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < length; i++)
        cout << numbers[i] << " ";
    cout << endl;

    return 0;
}


//Expected output :
Sorted array: 1 5 7 8 9 10
