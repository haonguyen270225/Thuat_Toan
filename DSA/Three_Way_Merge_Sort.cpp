#include <iostream>
#include <vector>
using namespace std;
void Merge(int arr[], int left, int mid1, int mid2, int right) {
	int size1 = mid1 - left + 1;
	int size2 = mid2 - mid1;
	int size3 = right - mid2;

	vector <int> leftArr(size1), midArr(size2), rightArr(size3);
	for (int i = 0; i < size1; i++) {
		leftArr[i] = arr[left + i];
	}
	for (int j = 0; j < size2; j++) {
		midArr[j] = arr[mid1 + j + 1];
	}
	for (int k = 0; k < size3; k++) {
		rightArr[k] = arr[mid2 + k + 1];
	}

	int i = 0, j = 0, k = 0;
	int index = left;
	while (i < size1 ||  j < size2 || k < size3) {
		int minValue = INT_MAX, minIdx = -1;
		if (i < size1 && leftArr[i] < minValue) {
			minValue = leftArr[i];
			minIdx = 0;
		}
		if (j < size2 && midArr[j] < minValue) {
			minValue = midArr[j];
			minIdx = 1;
		}
		if (k < size3 && rightArr[k] < minValue) {
			minValue = rightArr[k];
			minIdx = 2;
		}
		//if (minIdx == -1) break;
		if (minIdx == 0) {
			arr[index++] = leftArr[i++];
		}
		else if (minIdx == 1) {
			arr[index++] = midArr[j++];
		}
		else {
			arr[index++] = rightArr[k++];
		}
	}
}

void ThreeWayMergeSort(int arr[] , int left , int right) {

	if (left >= right) return;
	int mid1 = left + (right - left) / 3;
	int mid2 = left + 2 * (right - left) / 3;

	ThreeWayMergeSort(arr, left, mid1);
	ThreeWayMergeSort(arr, mid1 + 1, mid2);
	ThreeWayMergeSort(arr, mid2 + 1, right);
	Merge(arr, left, mid1, mid2, right);

}


int main() {
	int a[] = { 100 , 10 , 2 , 102 , 45 , 22 , 12 , 45 , 67 , 23 , 34 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Sap Xep tron 3 chieu :\n";
	cout << "Mang truoc khi sap xep :\n";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	ThreeWayMergeSort(a, 0, n - 1);
	cout << "\nMang sau khi sap xep :\n";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
