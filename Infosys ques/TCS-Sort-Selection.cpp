In this , swapping takes place
12 34 45 23 61 8
8 34 45 23 61 12
8 12 45 23 61 34 .... and it continues
Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the
smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list.
The time complexity of Selection Sort is O(N2) as there are two nested loops
Auxiliary Space: O(1) 
The default implementation of the Selection Sort Algorithm is not stable. However, it can be made stable. 
Yes, Selection Sort Algorithm is an in-place algorithm, as it does not require extra space.

#include <bits/stdc++.h> 
using namespace std; 

// Function for Selection sort 
void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	// One by one move boundary of 
	// unsorted subarray 
	for (i = 0; i < n - 1; i++) { 

		// Find the minimum element in 
		// unsorted array 
		min_idx = i; 
		for (j = i + 1; j < n; j++) { 
			if (arr[j] < arr[min_idx]) 
				min_idx = j; 
		} 

		// Swap the found minimum element 
		// with the first element 
		if (min_idx != i) 
			swap(arr[min_idx], arr[i]); 
	} 
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) { 
		cout << arr[i] << " "; 
		cout << endl; 
	} 
} 

// Driver program 
int main() 
{ 
	int arr[] = { 64, 25, 12, 22, 11 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	// Function Call 
	selectionSort(arr, n); 
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
	return 0; 
} 

// This is code is contributed by rathbhupendra
