#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sift(int arr[], int start, int size) {
    int root = start;

    while(root * 2 + 1 < size) {

        int child = root * 2 + 1;

        if(child + 1 < size && arr[child] < arr[child + 1])
            child++;

        if(arr[root] < arr[child]) {
            swap(&arr[root], &arr[child]);
            root = child;
        } else {
            return;
        }
    }
}

void smoothSort(int arr[], int n) {

    for(int i = n / 2 - 1; i >= 0; i--)
        sift(arr, i, n);

    for(int i = n - 1; i > 0; i--) {

        swap(&arr[0], &arr[i]);
        sift(arr, 0, i);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = 6;

    smoothSort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
