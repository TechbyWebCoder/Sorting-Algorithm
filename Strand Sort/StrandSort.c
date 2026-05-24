#include <stdio.h>

void merge(int result[], int temp[], int *rSize, int tSize) {

    int merged[100];
    int i = 0, j = 0, k = 0;

    while(i < *rSize && j < tSize) {

        if(result[i] < temp[j])
            merged[k++] = result[i++];
        else
            merged[k++] = temp[j++];
    }

    while(i < *rSize)
        merged[k++] = result[i++];

    while(j < tSize)
        merged[k++] = temp[j++];

    for(i = 0; i < k; i++)
        result[i] = merged[i];

    *rSize = k;
}

void strandSort(int arr[], int n) {

    int result[100];
    int rSize = 0;

    int used[100] = {0};

    while(1) {

        int temp[100];
        int tSize = 0;
        int last = -9999;
        int found = 0;

        for(int i = 0; i < n; i++) {

            if(!used[i] && arr[i] >= last) {
                temp[tSize++] = arr[i];
                last = arr[i];
                used[i] = 1;
                found = 1;
            }
        }

        if(!found)
            break;

        merge(result, temp, &rSize, tSize);
    }

    for(int i = 0; i < rSize; i++)
        arr[i] = result[i];
}

int main() {

    int arr[] = {10, 5, 30, 40, 2, 4, 9};
    int n = 7;

    strandSort(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
