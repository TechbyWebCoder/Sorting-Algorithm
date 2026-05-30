class FlashSort {

    static void flashSort(int arr[]) {

        int n = arr.length;

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

        int arr[] = {30, 20, 10, 50, 40};

        flashSort(arr);

        for(int num : arr)
            System.out.print(num + " ");
    }
}
