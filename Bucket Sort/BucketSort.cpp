#include <iostream>
using namespace std;

void bucketSort(float arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47};
    int n = 6;

    bucketSort(arr, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
