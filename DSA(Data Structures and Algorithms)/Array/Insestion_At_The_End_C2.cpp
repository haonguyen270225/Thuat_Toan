//Chèn phần tử vào cuối mảng (Insertion : At the end);
#include <iostream>
#include <vector>
using namespace std;
int main() {
	// c2 : Sử dụng phương thức tùy chỉnh;
	vector <int> arr = { 10 , 20 , 30 , 40 , 100 , 0};
	int element = 50;
	int n = 5;
	cout << "Mang truoc khi xap sep la:\n";
	for (int i = 0; i < arr.size() - 1; i++) {
		cout << arr[i] << " ";
	}
	// Chèn phần tử vào cuối mảng;
	arr[5] = element;

	cout << "\nMang sau khi chen la:\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	// Chú ý : Lỗi truy cập phần tử ngoài mảng (Expression : vector subscript out of range !)
	return 0;
}