//Xóa :  phần tử đầu trong mảng (Deletion : At Beginning)
#include <iostream>
#include <vector>
using namespace std;
int main() {
	//c1 : Sử dụng các phương thức có sẵn trong thư viện:
	vector <int>  arr = { 10 , 20 , 30 , 40 ,100 };
	cout << "Mang truoc  khi xoa :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] <<" ";
	}

	// Xóa phần tử đầu mảng;
	arr.erase(arr.begin());
	cout << "\nMang sau khi xoa :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	return 0;
}