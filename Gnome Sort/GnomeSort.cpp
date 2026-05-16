#include <iostream>
using namespace std;

void gnomeSort(int arr[], int n) {
    int index = 0;

    while(index < n) {

        if(index == 0)
            index++;

        if(arr[index] >= arr[index - 1]) {
            index++;
        } else {

            swap(arr[index], arr[index - 1]);
            index--;
        }
    }
}

int main() {
    int arr[] = {34, 2, 10, -9};
    int n = 4;

    gnomeSort(arr, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
