#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    int output[n];
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    int count[max + 1];

    for(int i = 0; i <= max; i++)
        count[i] = 0;

    for(int i = 0; i < n; i++)
        count[arr[i]]++;

    for(int i = 1; i <= max; i++)
        count[i] += count[i - 1];

    for(int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for(int i = 0; i < n; i++)
        arr[i] = output[i];
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;

    countingSort(arr, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
