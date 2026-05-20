#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bitonicMerge(int arr[], int low, int cnt, int dir) {

    if(cnt > 1) {

        int k = cnt / 2;

        for(int i = low; i < low + k; i++) {

            if(dir == (arr[i] > arr[i + k]))
                swap(arr[i], arr[i + k]);
        }

        bitonicMerge(arr, low, k, dir);
        bitonicMerge(arr, low + k, k, dir);
    }
}

void bitonicSort(int arr[], int low, int cnt, int dir) {

    if(cnt > 1) {

        int k = cnt / 2;

        bitonicSort(arr, low, k, 1);
        bitonicSort(arr, low + k, k, 0);

        bitonicMerge(arr, low, cnt, dir);
    }
}

int main() {
    int arr[] = {3, 7, 4, 8, 6, 2, 1, 5};
    int n = 8;

    bitonicSort(arr, 0, n, 1);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
