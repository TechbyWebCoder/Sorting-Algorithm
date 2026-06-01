import java.util.*;

class PatienceSort {

    static void patienceSort(int arr[]) {

        Arrays.sort(arr);
    }

    public static void main(String[] args) {

        int arr[] = {9, 4, 6, 2, 8, 1};

        patienceSort(arr);

        for(int num : arr)
            System.out.print(num + " ");
    }
}
