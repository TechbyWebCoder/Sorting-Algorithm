#include <stdio.h>

void flip(int arr[], int i) {
    int start = 0;

    while(start < i) {
        int temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;

        start++;
        i--;
    }
}

int findMax(int arr[], int n) {
    int maxIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    return maxIndex;
}

void pancakeSort(int arr[], int n) {

    for(int currSize = n; currSize > 1; currSize--) {

        int maxIndex = findMax(arr, currSize);

        if(maxIndex != currSize - 1) {

            flip(arr, maxIndex);

            flip(arr, currSize - 1);
        }
    }
}

int main() {
    int arr[] = {23, 10, 20, 11, 12, 6, 7};
    int n = 7;

    pancakeSort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
