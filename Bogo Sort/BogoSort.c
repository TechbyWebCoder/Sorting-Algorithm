#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isSorted(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1])
            return 0;
    }
    return 1;
}

void shuffle(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int j = rand() % n;

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void bogoSort(int arr[], int n) {

    while(!isSorted(arr, n)) {
        shuffle(arr, n);
    }
}

int main() {
    int arr[] = {3, 2, 1};
    int n = 3;

    srand(time(0));

    bogoSort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
