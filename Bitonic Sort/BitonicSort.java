class BitonicSort {

    static void swap(int arr[], int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    static void bitonicMerge(int arr[], int low, int cnt, boolean dir) {

        if(cnt > 1) {

            int k = cnt / 2;

            for(int i = low; i < low + k; i++) {

                if(dir == (arr[i] > arr[i + k]))
                    swap(arr, i, i + k);
            }

            bitonicMerge(arr, low, k, dir);
            bitonicMerge(arr, low + k, k, dir);
        }
    }

    static void bitonicSort(int arr[], int low, int cnt, boolean dir) {

        if(cnt > 1) {

            int k = cnt / 2;

            bitonicSort(arr, low, k, true);
            bitonicSort(arr, low + k, k, false);

            bitonicMerge(arr, low, cnt, dir);
        }
    }

    public static void main(String[] args) {

        int arr[] = {3, 7, 4, 8, 6, 2, 1, 5};

        bitonicSort(arr, 0, arr.length, true);

        for(int num : arr)
            System.out.print(num + " ");
    }
}
