class SmoothSort {

    static void sift(int arr[], int start, int size) {

        int root = start;

        while(root * 2 + 1 < size) {

            int child = root * 2 + 1;

            if(child + 1 < size && arr[child] < arr[child + 1])
                child++;

            if(arr[root] < arr[child]) {

                int temp = arr[root];
                arr[root] = arr[child];
                arr[child] = temp;

                root = child;
            } else {
                return;
            }
        }
    }

    static void smoothSort(int arr[], int n) {

        for(int i = n / 2 - 1; i >= 0; i--)
            sift(arr, i, n);

        for(int i = n - 1; i > 0; i--) {

            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;

            sift(arr, 0, i);
        }
    }

    public static void main(String[] args) {

        int arr[] = {12, 11, 13, 5, 6, 7};

        smoothSort(arr, arr.length);

        for(int num : arr)
            System.out.print(num + " ");
    }
}
