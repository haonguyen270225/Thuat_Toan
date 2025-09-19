// Xây dựng thuật toán Sắp Xếp Trộn (Merge Sort)
// Độ phức tạp thời gian : O(nlongn);
#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int>& arr, int left, int mid , int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;
	// Tạo hai mảng tạm L[] R[] đẻ lưu;
	vector<int> L(n1), R(n2);
	for (int i = 0; i < n1; i++) {
		L[i] = arr[left + i];
	}
	for (int j = 0; j < n2; j++) {
		R[j] = arr[mid + 1 + j];
	}
	int i = 0, j = 0;
	int k = left;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			++i;
		}
		else {
			arr[k] = R[j];
			++j;
		}
		++k;
	}
	while (i < n1) {
		arr[k] = L[i];
		++k;
		++i;
	}
	
	while (j < n2) {
		arr[k] = R[j];
		++j;
		++k;
	}
}

void MergeSort(vector <int>& arr, int left, int right) {
	if (left >= right) return;
	int pivot = left + (right - left) / 2;
	MergeSort(arr, left, pivot);
	MergeSort(arr, pivot + 1, right);
	Merge(arr, left, pivot, right);
}

int main() {
	vector <int> arr = { 10 , 5 , 32 , 46 , 11 , 90 };
	int n = arr.size();
	MergeSort(arr, 0, n - 1);
	cout << "Mang sau khi sap xep la : ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}