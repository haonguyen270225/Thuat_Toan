// Thuật toán sắp xếp chèn (Insertion Sort)  : 
// Time complexity :
// Trường hợp tốt nhất: O(n) khi mảng đã được sắp xếp.
// Trường hợp trung bình: O(n^2)
// Trường hợp xấu nhất: O(n^2) khi mảng được sắp xếp ngược.

#include <iostream>
using namespace std;

void InsertionSort(int arr[] , int n) {
	for (int i = 1; i < n; i++ ) {
		int key = arr[i];
		int j = i - 1;
		
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void PrintArray(int arr[] , int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[] = { 12 , 11 , 13 , 5 , 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	InsertionSort(arr, n);
	PrintArray(arr, n);
	return 0;
}