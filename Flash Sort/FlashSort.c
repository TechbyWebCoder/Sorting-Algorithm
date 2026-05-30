#include <stdio.h>

void flashSort(int arr[], int n) {

    int min = arr[0];
    int maxIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    if(arr[maxIndex] == min)
        return;

    int m = (int)(0.43 * n);
    int L[m];

    for(int i = 0; i < m; i++)
        L[i] = 0;

    double c = (double)(m - 1) / (arr[maxIndex] - min);

    for(int i = 0; i < n; i++) {
        int k = (int)(c * (arr[i] - min));
        L[k]++;
    }

    for(int i = 1; i < m; i++)
        L[i] += L[i - 1];

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[0];
    arr[0] = temp;

    int move = 0, j = 0, k = m - 1;
    int flash;

    while(move < n - 1) {

        while(j > L[k] - 1) {
            j++;
            k = (int)(c * (arr[j] - min));
        }

        flash = arr[j];

        while(j != L[k]) {
            k = (int)(c * (flash - min));

            int hold = arr[L[k] - 1];
            arr[L[k] - 1] = flash;
            flash = hold;

            L[k]--;
            move++;
        }
    }

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
    int arr[] = {30, 20, 10, 50, 40};
    int n = 5;

    flashSort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
