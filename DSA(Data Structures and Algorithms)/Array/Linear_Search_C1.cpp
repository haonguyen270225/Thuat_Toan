//Tìm kiếm tuyến tính (Linear Search)
// Time Comphexity : O(n) -- Độ phức tạp thời gian;
// Auxiluary Space : O(1) -- Không gian phụ trợ (Chính là biến i lặp qua mảng mà thuật toán sử dụng);
#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(vector<int>& arr, int element) {
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == element) {
			return i;
		}
	}
	return -1;
}

int main() {
	vector <int> arr = { 10 , 20 , 30 , 40 };
	int x = 30;

	int c = LinearSearch(arr, x);
	if (c == -1) {
		cout << "\n X khong co trong mang !";
	}
	else {
		cout << "\nX nam o vi tri : " << c+1 << " trong mang !";
	}
	return 0;
}