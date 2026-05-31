#include <stdio.h>

int findMinIndex(int arr[], int n) {
    int minIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[minIndex])
            minIndex = i;
    }

    return minIndex;
}

void tournamentSort(int arr[], int n) {

    int sorted[n];

    for(int i = 0; i < n; i++) {

        int minIndex = findMinIndex(arr, n);

        sorted[i] = arr[minIndex];
        arr[minIndex] = 999999;
    }

    for(int i = 0; i < n; i++)
        arr[i] = sorted[i];
}

int main() {

    int arr[] = {29, 10, 14, 37, 13};
    int n = 5;

    tournamentSort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
