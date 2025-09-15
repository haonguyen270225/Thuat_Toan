//Chèn phần tử vào vị trí cho trước (Insertion given position) !
#include <iostream>
#include <vector>
using namespace std;
int main() {
	// c1 : Sử dụng phương thức có sẵn trong thư viện :
	vector <int> arr = { 10 , 20 , 30 , 40 };
	int element = 50;
	int position = 3;
	cout << "Mang truoc khi chen la :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

	// Chen phan tu vao vi tri;
	arr.insert(arr.begin() + position - 1, element);

	cout << "\nMang sau khi xap sep la :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	// Chú ý : Lỗi truy cập phần tử ngoài mảng (Expression : vector subscript out of range !)
	return 0;
}