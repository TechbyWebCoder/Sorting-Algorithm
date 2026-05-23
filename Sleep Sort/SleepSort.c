#include <stdio.h>
#include <windows.h>

void sleepSort(int arr[], int n) {

    for(int i = 0; i < n; i++) {

        Sleep(arr[i] * 100);

        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {4, 2, 7, 1, 3};
    int n = 5;

    sleepSort(arr, n);

    return 0;
}
