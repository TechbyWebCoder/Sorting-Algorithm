#include <iostream>
#include <vector>
using namespace std;

void flashSort(vector<int>& arr) {

    int n = arr.size();
    int minVal = arr[0];
    int maxIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] < minVal)
            minVal = arr[i];

        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    if(arr[maxIndex] == minVal)
        return;

    int m = (int)(0.43 * n);
    vector<int> L(m, 0);

    double c = (double)(m - 1) / (arr[maxIndex] - minVal);

    for(int i = 0; i < n; i++)
        L[(int)(c * (arr[i] - minVal))]++;

    for(int i = 1; i < m; i++)
        L[i] += L[i - 1];

    swap(arr[maxIndex], arr[0]);

    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {30, 20, 10, 50, 40};

    flashSort(arr);

    for(int num : arr)
        cout << num << " ";
}
