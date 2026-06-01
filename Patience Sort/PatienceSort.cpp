#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void patienceSort(vector<int>& arr) {

    vector<vector<int>> piles;

    for(int num : arr) {

        bool placed = false;

        for(auto &pile : piles) {

            if(num <= pile.back()) {
                pile.push_back(num);
                placed = true;
                break;
            }
        }

        if(!placed)
            piles.push_back({num});
    }

    vector<int> result;

    while(!piles.empty()) {

        int minPile = 0;

        for(int i = 1; i < piles.size(); i++) {
            if(piles[i].back() < piles[minPile].back())
                minPile = i;
        }

        result.push_back(piles[minPile].back());
        piles[minPile].pop_back();

        if(piles[minPile].empty())
            piles.erase(piles.begin() + minPile);
    }

    arr = result;
}

int main() {

    vector<int> arr = {9, 4, 6, 2, 8, 1};

    patienceSort(arr);

    for(int num : arr)
        cout << num << " ";
}
