#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> a, vector<int> b) {

    vector<int> result;
    int i = 0, j = 0;

    while(i < a.size() && j < b.size()) {

        if(a[i] < b[j])
            result.push_back(a[i++]);
        else
            result.push_back(b[j++]);
    }

    while(i < a.size())
        result.push_back(a[i++]);

    while(j < b.size())
        result.push_back(b[j++]);

    return result;
}

void strandSort(vector<int>& arr) {

    vector<int> result;

    while(!arr.empty()) {

        vector<int> sublist;
        sublist.push_back(arr[0]);

        vector<int> remaining;

        for(int i = 1; i < arr.size(); i++) {

            if(arr[i] >= sublist.back())
                sublist.push_back(arr[i]);
            else
                remaining.push_back(arr[i]);
        }

        result = merge(result, sublist);
        arr = remaining;
    }

    arr = result;
}

int main() {

    vector<int> arr = {10, 5, 30, 40, 2, 4, 9};

    strandSort(arr);

    for(int num : arr)
        cout << num << " ";
}
