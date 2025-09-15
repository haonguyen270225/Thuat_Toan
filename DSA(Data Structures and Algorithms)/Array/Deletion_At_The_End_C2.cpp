//Xóa : phần tử ở cuối mảng (Deletion : At The End) 
// Time Comphexity : O(1); -- Độ phức tạp thời gian
// Auxiliary Space : O(1); -- Không gian phụ  trợ
#include <iostream>
#include <vector>
using namespace std;
int main() {
	//c1 :Sử dụng các phương thức tùy chỉnh :
	vector <int>  arr = { 10 , 20 , 30 , 40 , 100 };
	int n = arr.size();
	cout << "Mang truoc  khi xoa :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

	// Xóa phần tử ở cuối mảng : Ta chỉ cần giảm kích thước mảng đi 1;
	n--;

	cout << "\nMang sau khi xoa :\n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}