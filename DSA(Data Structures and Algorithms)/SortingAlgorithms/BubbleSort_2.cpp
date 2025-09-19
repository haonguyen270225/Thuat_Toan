// Bubble Sort : Sắp xếp nổi bọt. Sử dụng đệ quy .
// Độ phức tạp thời gian : O(n^2)
// Không gia phụ trợ : O(n)
#include <iostream>
#include <vector>
using namespace std;
void PrintArray(vector <int> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}
void BubbleSort(vector <int> &arr , int n) {
	// Trường hợp cơ sở (Base Case);
	if (n == 1) return;
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			swap(arr[i], arr[i + 1]);
			count++;
		}
	}
	// Kiểm tra xem có xảy ra hóng đổi không;
	if (count == 0) return;
	BubbleSort(arr, n - 1);
}


int main() {
	vector <int> arr = { 10 , 5 , 42 , 21 , 90 , 2 , 1 };
	int n = arr.size();
	BubbleSort(arr, n);
	cout << "Mang sau khi sap xep la :\n";
	PrintArray(arr);
	return 0;
}