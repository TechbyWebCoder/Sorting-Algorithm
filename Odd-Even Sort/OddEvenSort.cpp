#include <iostream>
using namespace std;

void oddEvenSort(int arr[], int n) {

    bool isSorted = false;

    while(!isSorted) {

        isSorted = true;

        for(int i = 1; i <= n - 2; i += 2) {

            if(arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                isSorted = false;
            }
        }

        for(int i = 0; i <= n - 2; i += 2) {

            if(arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                isSorted = false;
            }
        }
    }
}

int main() {

    int arr[] = {34, 2, 10, -9};
    int n = 4;

    oddEvenSort(arr, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
