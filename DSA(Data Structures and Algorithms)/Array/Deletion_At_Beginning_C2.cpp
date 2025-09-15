//Xóa : phần tử đầu trong mảng (Deletion : At Beginning)
#include <iostream>
#include <vector>
using namespace std;
int main() {
	//c2 : Sử dụng các phương thức tùy chỉnh:
	vector <int>  arr = { 10 , 20 , 30 , 40 , 100 };
	int n = arr.size();
	cout << "Mang truoc  khi xoa :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

	// Xóa phần tử đầu mảng : Dịch chuyển tất cả các phần từ sang trái 1 đơn vị ;
	for (int i = 1; i < n; i++) {
		arr[i - 1] = arr[i];
	}

	cout << "\nMang sau khi xoa :\n";
	for (int i = 0; i < n - 1; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}