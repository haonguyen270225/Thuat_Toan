#include <iostream>
#include <vector>
using namespace std;
int main() {
	//c2 : Sử dụng phương thức tùy chỉnh:
	vector <int> arr = { 10 , 20 , 30 , 40  , 0};
	int element = 50;
	int position = 3;
	
	cout << "Mang truoc khi chen :\n";
	for (int i = 0; i < arr.size() - 1; i++) {
		cout << arr[i] << " "; 
	}
	
	// Dời các phần tử trước position về bên phải 1 chỉ mục;
	for (int i = arr.size() - 1; i >= position ; i--) {
		arr[i] = arr[i - 1];
	}
	// Chèn phần tử vào vị trí position
	arr[position - 1] = element;
	cout << "\nMang sau khi chen la :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	// Chú ý : Lỗi truy cập phần tử ngoài mảng (Expression : vector subscript out of range !)
	return 0;
}