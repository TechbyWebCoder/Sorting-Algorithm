#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void stoogeSort(int arr[], int low, int high) {

    if(arr[low] > arr[high])
        swap(&arr[low], &arr[high]);

    if(high - low + 1 > 2) {

        int t = (high - low + 1) / 3;

        stoogeSort(arr, low, high - t);
        stoogeSort(arr, low + t, high);
        stoogeSort(arr, low, high - t);
    }
}

int main() {

    int arr[] = {2, 4, 5, 3, 1};
    int n = 5;

    stoogeSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
