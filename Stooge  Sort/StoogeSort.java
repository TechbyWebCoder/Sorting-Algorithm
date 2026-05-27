class StoogeSort {

    static void stoogeSort(int arr[], int low, int high) {

        if(arr[low] > arr[high]) {

            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }

        if(high - low + 1 > 2) {

            int t = (high - low + 1) / 3;

            stoogeSort(arr, low, high - t);
            stoogeSort(arr, low + t, high);
            stoogeSort(arr, low, high - t);
        }
    }

    public static void main(String[] args) {

        int arr[] = {2, 4, 5, 3, 1};

        stoogeSort(arr, 0, arr.length - 1);

        for(int num : arr)
            System.out.print(num + " ");
    }
}
