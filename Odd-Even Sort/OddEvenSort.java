class OddEvenSort {

    static void oddEvenSort(int arr[]) {

        boolean isSorted = false;

        while(!isSorted) {

            isSorted = true;

            for(int i = 1; i <= arr.length - 2; i += 2) {

                if(arr[i] > arr[i + 1]) {

                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;

                    isSorted = false;
                }
            }

            for(int i = 0; i <= arr.length - 2; i += 2) {

                if(arr[i] > arr[i + 1]) {

                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;

                    isSorted = false;
                }
            }
        }
    }

    public static void main(String[] args) {

        int arr[] = {34, 2, 10, -9};

        oddEvenSort(arr);

        for(int num : arr)
            System.out.print(num + " ");
    }
}
