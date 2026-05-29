#include <iostream>
using namespace std;

void sift(int arr[], int start, int size) {
    int root = start;

    while(root * 2 + 1 < size) {

        int child = root * 2 + 1;

        if(child + 1 < size && arr[child] < arr[child + 1])
            child++;

        if(arr[root] < arr[child]) {
            swap(arr[root], arr[child]);
            root = child;
        } else {
            return;
        }
    }
}

void smoothSort(int arr[], int n) {

    for(int i = n / 2 - 1; i >= 0; i--)
        sift(arr, i, n);

    for(int i = n - 1; i > 0; i--) {

        swap(arr[0], arr[i]);
        sift(arr, 0, i);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};

    smoothSort(arr, 6);

    for(int i = 0; i < 6; i++)
        cout << arr[i] << " ";
}
