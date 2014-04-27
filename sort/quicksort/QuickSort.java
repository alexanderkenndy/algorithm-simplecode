package com.alexander.sort.implementation;

public class QuickSort {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		int[] arr = { 52, 40, 90, 20, 19, 50 };
		quickSort(arr, 0, arr.length - 1);
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}
	}

	public static int getMiddle(int[] array, int start, int end) {
		int tmp = array[start];
		while (start < end) {
			while (start < end && array[end] > tmp) {
				end--;
			}
			array[start] = array[end];
			while (start < end && array[start] < tmp) {
				start++;
			}
			array[end] = array[start];
		}
		array[start] = tmp;
		return start;
	}

	public static void quickSort(int[] array, int start, int end) {
		if (start < end) {
			int middle = getMiddle(array, start, end);
			quickSort(array, start, middle - 1);
			quickSort(array, middle + 1, end);
		}
	}
}
