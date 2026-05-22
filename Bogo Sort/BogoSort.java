import java.util.Random;

class BogoSort {

    static Random random = new Random();

    static boolean isSorted(int arr[]) {

        for(int i = 0; i < arr.length - 1; i++) {
            if(arr[i] > arr[i + 1])
                return false;
        }

        return true;
    }

    static void shuffle(int arr[]) {

        for(int i = 0; i < arr.length; i++) {

            int j = random.nextInt(arr.length);

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    static void bogoSort(int arr[]) {

        while(!isSorted(arr)) {
            shuffle(arr);
        }
    }

    public static void main(String[] args) {

        int arr[] = {3, 2, 1};

        bogoSort(arr);

        for(int num : arr)
            System.out.print(num + " ");
    }
}
