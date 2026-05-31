#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void tournamentSort(vector<int>& arr) {

    vector<int> sorted;

    int n = arr.size();

    for(int i = 0; i < n; i++) {

        int minIndex = 0;

        for(int j = 1; j < n; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        sorted.push_back(arr[minIndex]);
        arr[minIndex] = INT_MAX;
    }

    arr = sorted;
}

int main() {

    vector<int> arr = {29, 10, 14, 37, 13};

    tournamentSort(arr);

    for(int num : arr)
        cout << num << " ";
}
