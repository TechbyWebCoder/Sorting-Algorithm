#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void printNumber(int num) {
    this_thread::sleep_for(chrono::milliseconds(num * 100));
    cout << num << " ";
}

int main() {
    int arr[] = {4, 2, 7, 1, 3};
    int n = 5;

    thread threads[n];

    for(int i = 0; i < n; i++) {
        threads[i] = thread(printNumber, arr[i]);
    }

    for(int i = 0; i < n; i++) {
        threads[i].join();
    }

    return 0;
}
