// Bubble Sort : Sắp xếp noi bọt . Sử dụng vòng lặp.
#include <iostream>
#include <vector>
using namespace std;
void BubbleSort(vector <int>& arr) {
	bool swapped;
	int n = arr.size();
	for (int i = 0; i < n - 1; i++) {
		swapped = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		// Nếu có chưa có swap thì ngưng;
		if (swapped == false) {
			break;
		}
	}
}
void PrintArray(vector <int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}
int main() {
	vector <int> arr = { 10 , 4 , 5 , 11 , 90 , 3 , 1 };
	BubbleSort(arr);
	cout << "Mang sau khi sap xep :\n";
	PrintArray(arr);
	return 0;
}