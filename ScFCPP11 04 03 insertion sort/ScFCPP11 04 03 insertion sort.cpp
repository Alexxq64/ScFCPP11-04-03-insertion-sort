#include <iostream>



void insertionSort(int* arr, int n)
{
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		for (int k = i - 1; k >= 0 && key < arr[k]; k--) {
			arr[k + 1] = arr[k];
			arr[k] = key;
		}
	}
}


int main()
{
	int arr[] = { 38, 27, 43, 3, 9, 82, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	insertionSort(arr, n);
	std::cout << std::endl;
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
}

