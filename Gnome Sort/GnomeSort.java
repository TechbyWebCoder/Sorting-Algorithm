class GnomeSort {

    static void gnomeSort(int arr[]) {
        int index = 0;
        int n = arr.length;

        while(index < n) {

            if(index == 0)
                index++;

            if(arr[index] >= arr[index - 1]) {
                index++;
            } else {

                int temp = arr[index];
                arr[index] = arr[index - 1];
                arr[index - 1] = temp;

                index--;
            }
        }
    }

    public static void main(String[] args) {
        int arr[] = {34, 2, 10, -9};

        gnomeSort(arr);

        for(int num : arr)
            System.out.print(num + " ");
    }
}
