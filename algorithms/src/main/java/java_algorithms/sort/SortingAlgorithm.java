package main.java.java_algorithms.sort;

public abstract class SortingAlgorithm
{
    public static void main(String[] args)
    {
        // Take list from command line and sort it
        int[] arr = new int[args.length];

        for (int i = 0; i < args.length; i++) {
            arr[i] = Integer.parseInt(args[i]);
        }

        arr = (new InsertionSort()).sort(arr);

        // Print results
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    public abstract int[] sort(int[] arr);
}