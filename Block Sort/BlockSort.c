#include <stdio.h>

void insertionSort(int arr[], int left, int right) {

    for(int i = left + 1; i <= right; i++) {

        int key = arr[i];
        int j = i - 1;

        while(j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void blockSort(int arr[], int n) {

    int blockSize = 4;

    for(int i = 0; i < n; i += blockSize) {

        int right = (i + blockSize - 1 < n) ?
                    i + blockSize - 1 : n - 1;

        insertionSort(arr, i, right);
    }

    for(int i = 1; i < n; i++) {

        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {

    int arr[] = {12, 4, 8, 15, 1, 9, 3, 7};
    int n = 8;

    blockSort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
