#include <stdio.h>

void oddEvenSort(int arr[], int n) {
    int isSorted = 0;

    while(!isSorted) {

        isSorted = 1;

        for(int i = 1; i <= n - 2; i += 2) {
            if(arr[i] > arr[i + 1]) {

                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                isSorted = 0;
            }
        }

        for(int i = 0; i <= n - 2; i += 2) {
            if(arr[i] > arr[i + 1]) {

                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                isSorted = 0;
            }
        }
    }
}

int main() {

    int arr[] = {34, 2, 10, -9};
    int n = 4;

    oddEvenSort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
