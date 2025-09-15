// Chèn ở vị trí đầu mảng (Insertions : At Beginning)
#include <iostream>
#include <vector>
using namespace std;
int main() {
	// C2 : Sử dụng các phương thức tùy chỉnh :
	int n = 4;
	vector <int> arr = { 10 , 20 , 30 , 40 , 0};
	int element = 50;
	cout << "Mang truoc khi chen la :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	// Chèn phần tử vào đầu mảng;
	for (int i = arr.size() - 1 ; i >= 1; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = element;

	cout << "\nMang sau khi chen la :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	// Chú ý lỗi truy cập ngoài phạp vi mảng (Expression : vector subscript out of range !);
	return 0;
}