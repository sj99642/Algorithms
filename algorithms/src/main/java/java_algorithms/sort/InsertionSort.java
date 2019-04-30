package main.java.java_algorithms.sort;

import java.util.Arrays;

public class InsertionSort extends SortingAlgorithm
{
    @Override
    public int[] sort(int[] arr)
    {
        int[] sorted = Arrays.copyOf(arr, arr.length);
        int temp;

        // Loop through, expanding the "sorted section" one by one
        for (int numSorted = 1; numSorted < sorted.length; numSorted++) {
            // Get the next item and swap it back until it is in place
            for (int i = numSorted; i > 1; i++) {
                if (sorted[i] < sorted[i-1]) {
                    temp = sorted[i-1];
                    sorted[i-1] = sorted[i];
                    sorted[i] = temp;
                }
            }
        }

        return sorted;
    }
}