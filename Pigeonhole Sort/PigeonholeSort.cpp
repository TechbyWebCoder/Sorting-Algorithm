#include <iostream>
using namespace std;

void pigeonholeSort(int arr[], int n) {

    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    int range = max - min + 1;

    int holes[range] = {0};

    for(int i = 0; i < n; i++)
        holes[arr[i] - min]++;

    int index = 0;

    for(int i = 0; i < range; i++) {

        while(holes[i]-- > 0)
            arr[index++] = i + min;
    }
}

int main() {

    int arr[] = {8, 3, 2, 7, 4, 6, 8};
    int n = 7;

    pigeonholeSort(arr, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
