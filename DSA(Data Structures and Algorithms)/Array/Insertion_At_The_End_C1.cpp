//Chèn phần tử vào cuối mảng (Insertion : At the end)
#include <iostream>
#include <vector>
using namespace std;
int main() {
	// c1 : Sử dụng phương thức có sẵn :
	vector <int> arr = { 10 , 20 , 30 , 40 , 100 };
	int element = 50;
	cout << "Mang truoc khi chen la :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	
	//Chèn phần tử vào cuối mảng;
	//arr.insert(arr.end(), element);
	arr.push_back(element);
	cout << "\nMang sau khi chen la :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	// Chú ý : Lỗi truy cập phần tử ngoài mảng (Expression : vector subscript out of range !)
	return 0;
}