class BucketSort {

    static void bucketSort(float arr[]) {
        int n = arr.length;

        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < n - i - 1; j++) {
                if(arr[j] > arr[j + 1]) {
                    float temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        float arr[] = {0.42f, 0.32f, 0.23f, 0.52f, 0.25f, 0.47f};

        bucketSort(arr);

        for(float num : arr)
            System.out.print(num + " ");
    }
}
