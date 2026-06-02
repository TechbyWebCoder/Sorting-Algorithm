class BlockSort {

    static void insertionSort(int arr[], int left, int right) {

        for(int i = left + 1; i <= right; i++) {

            int key = arr[i];
            int j = i - 1;

            while(j >= left && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }

    static void blockSort(int arr[]) {

        int blockSize = 4;
        int n = arr.length;

        for(int i = 0; i < n; i += blockSize) {

            int right = Math.min(i + blockSize - 1, n - 1);

            insertionSort(arr, i, right);
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

    public static void main(String[] args) {

        int arr[] = {12, 4, 8, 15, 1, 9, 3, 7};

        blockSort(arr);

        for(int num : arr)
            System.out.print(num + " ");
    }
}
