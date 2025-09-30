//Quick Sort (Sắp xếp nhanh) : 
// Độ phức tạp thời gian
// xấu nhất : O(N^2);
// Tốt nhất  và trung bình : 0(NLogN);
// Không gian phụ trợ :
// Xấu nhất : O(N)
// Tốt nhất : O(LogN)

#include <iostream>
#include <vector>
using namespace std;
//Partition
int Partition(vector<int> &arr , int low , int high) {
	int pivot = arr[high]; // Chọn phần tử cuối làm pivot
	
	int i = low - 1; // Chỉ số của phần tử nhỏ hơn pivot
	for (int j = low; j <= high; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1; // Trả về vị trí của pivot sau khi sắp xếp
}

void QuickSort(vector <int> &arr , int low , int high) {
	if (low < high) {
		int pi = Partition(arr, low, high);
		
		QuickSort(arr, low, pi - 1);
		QuickSort(arr, pi + 1, high);
	}
}

int main() {
	vector<int> arr = { 100 , 5 , 12 , 11 , 2 , 8  , 45 , 23 , 2424 , 24 , 244 ,  44 };
	int n = arr.size();
	cout << "Mang truoc khi sap xep la :\n";
	for (int i = 0; i < n; i++ ) {
		cout << arr[i] << " ";
	}

	cout << "\nMang sau khi sap xep la : \n";
	QuickSort(arr, 0, n-1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}