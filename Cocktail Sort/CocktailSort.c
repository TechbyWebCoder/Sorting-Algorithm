#include <stdio.h>

void cocktailSort(int arr[], int n) {
    int swapped = 1;
    int start = 0;
    int end = n - 1;

    while(swapped) {

        swapped = 0;

        for(int i = start; i < end; i++) {
            if(arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }

        if(!swapped)
            break;

        swapped = 0;
        end--;

        for(int i = end - 1; i >= start; i--) {
            if(arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }

        start++;
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8, 0, 2};
    int n = 7;

    cocktailSort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
