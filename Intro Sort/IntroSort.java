class IntroSort {

    static void insertionSort(int arr[], int low, int high) {

        for(int i = low + 1; i <= high; i++) {
            int key = arr[i];
            int j = i - 1;

            while(j >= low && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }

    static int partition(int arr[], int low, int high) {

        int pivot = arr[high];
        int i = low - 1;

        for(int j = low; j < high; j++) {
            if(arr[j] < pivot) {
                i++;

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        return i + 1;
    }

    static void introSort(int arr[], int low, int high, int depthLimit) {

        int size = high - low + 1;

        if(size < 16) {
            insertionSort(arr, low, high);
            return;
        }

        if(depthLimit == 0)
            return;

        int pivot = partition(arr, low, high);

        introSort(arr, low, pivot - 1, depthLimit - 1);
        introSort(arr, pivot + 1, high, depthLimit - 1);
    }

    public static void main(String[] args) {

        int arr[] = {10, 3, 7, 4, 9, 2, 8, 5};

        int depthLimit = (int)(2 * Math.log(arr.length));

        introSort(arr, 0, arr.length - 1, depthLimit);

        for(int num : arr)
            System.out.print(num + " ");
    }
}
