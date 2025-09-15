//Thuật toán tìm kiếm nhị phân (Binary Search)
//Time Comphexity O(nlongn)
// Auxiliary Space O(1) , Nếu xem xét ngăn xếp cuộc goi đệ quy thì không gian phụ trợ là O(NlogN)
#include <iostream>
#include <vector>
using namespace std;
int BinarySearch1(vector<int>& arr, int element) { // Sử dụng vòng lặp
	int low = 0;
	int high = arr.size() - 1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] == element) {
			return mid;
		}
		if (arr[mid] < element) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}

int BinarySearch2(vector <int>& arr ,int low  , int high ,  int element) {
	// Sử dụng đệ quy;
	if (high >= low) {
		int mid = low + (high - low) / 2;
		
		if (arr[mid] == element) {
			return mid;
		}
		if (arr[mid] < element) {
			return BinarySearch2(arr, mid + 1, high, element);
		}
		return BinarySearch2(arr, low, mid - 1, element);
	}
	return -1;
}
int main() {
	vector <int> arr = { 1 ,2 , 3, 4 ,5 , 6 , 7  ,8 , 9 , 10  };
	int element = 6;
	//int c = BinarySearch1(arr, element);
	int c = BinarySearch2(arr, 0, arr.size() - 1, element);
	if (c == -1) {
		cout << "\nX khong co trong mang !\n";
	}
	else {
		cout << "X nam o vi tri " << c + 1 << " trong mang ! \n";
	}
	// Chú ý : Mảng phải được xấp sếp trước khi tìm kiếm nhị phân;
	return 0;
}