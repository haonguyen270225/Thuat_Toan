// Chèn ở đầu (Insertions  : At beginning); 
#include <iostream>
#include <vector>
using namespace std;
int main() {
	// C1 :  Chèn bằng các phương thức có sẵn trong thư viện:
	vector <int> arr = { 10 , 20 , 30 ,40 };
	int element = 50;
	cout << "Mang truoc khi chen  la : \n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	// Chèn phần từ vào đầu mảng:
	arr.insert(arr.begin(), element);

	cout << "\nMang sau khi chen la : \n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	// Chú ý lỗi truy cập ngoài phạp vi mảng (Expression : vector subscript out of range !);
	return 0;
}