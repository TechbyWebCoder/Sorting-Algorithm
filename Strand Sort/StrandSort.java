import java.util.ArrayList;

class StrandSort {

    static ArrayList<Integer> merge(ArrayList<Integer> a, ArrayList<Integer> b) {

        ArrayList<Integer> result = new ArrayList<>();

        int i = 0, j = 0;

        while(i < a.size() && j < b.size()) {

            if(a.get(i) < b.get(j))
                result.add(a.get(i++));
            else
                result.add(b.get(j++));
        }

        while(i < a.size())
            result.add(a.get(i++));

        while(j < b.size())
            result.add(b.get(j++));

        return result;
    }

    static void strandSort(ArrayList<Integer> arr) {

        ArrayList<Integer> result = new ArrayList<>();

        while(!arr.isEmpty()) {

            ArrayList<Integer> sublist = new ArrayList<>();
            sublist.add(arr.remove(0));

            for(int i = 0; i < arr.size(); ) {

                if(arr.get(i) >= sublist.get(sublist.size() - 1))
                    sublist.add(arr.remove(i));
                else
                    i++;
            }

            result = merge(result, sublist);
        }

        arr.addAll(result);
    }

    public static void main(String[] args) {

        ArrayList<Integer> arr = new ArrayList<>();

        arr.add(10);
        arr.add(5);
        arr.add(30);
        arr.add(40);
        arr.add(2);
        arr.add(4);
        arr.add(9);

        strandSort(arr);

        for(int num : arr)
            System.out.print(num + " ");
    }
}
