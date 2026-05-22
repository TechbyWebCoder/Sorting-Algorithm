#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool isSorted(int arr[], int n) {

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1])
            return false;
    }

    return true;
}

void shuffle(int arr[], int n) {

    for(int i = 0; i < n; i++) {

        int j = rand() % n;

        swap(arr[i], arr[j]);
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
        cout << arr[i] << " ";
}
