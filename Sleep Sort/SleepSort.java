class SleepSort {

    static class SortThread extends Thread {

        int value;

        SortThread(int value) {
            this.value = value;
        }

        public void run() {

            try {
                Thread.sleep(value * 100);
                System.out.print(value + " ");
            } catch(Exception e) {
                e.printStackTrace();
            }
        }
    }

    public static void main(String[] args) {

        int arr[] = {4, 2, 7, 1, 3};

        for(int num : arr) {
            new SortThread(num).start();
        }
    }
}
