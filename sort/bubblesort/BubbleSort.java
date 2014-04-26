package com.alexander.sort.implementation;

public class BubbleSort {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr = { 90, 20, 19, 22, 30, 41, 30, 27, 5, 3 };
		for (int i = 0; i < arr.length - 1; i++) {

			for (int j = 0; j < arr.length - i - 1; j++) {

				if (arr[j + 1] < arr[j]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
			System.out.print("The " + (i + 1) + " turn sort:");
			for (int k = 0; k < arr.length; k++) {
				System.out.print(arr[k] + " ");
			}
			System.out.println();
		}
		System.out.print("Result:");
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}
	}

}
