class TournamentSort {

    static void tournamentSort(int arr[]) {

        int n = arr.length;
        int sorted[] = new int[n];

        for(int i = 0; i < n; i++) {

            int minIndex = 0;

            for(int j = 1; j < n; j++) {
                if(arr[j] < arr[minIndex])
                    minIndex = j;
            }

            sorted[i] = arr[minIndex];
            arr[minIndex] = Integer.MAX_VALUE;
        }

        System.arraycopy(sorted, 0, arr, 0, n);
    }

    public static void main(String[] args) {

        int arr[] = {29, 10, 14, 37, 13};

        tournamentSort(arr);

        for(int num : arr)
            System.out.print(num + " ");
    }
}
