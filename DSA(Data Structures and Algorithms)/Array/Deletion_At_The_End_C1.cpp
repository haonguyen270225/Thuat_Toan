//Xóa : phần tử ở cuối mảng (Deletion : At The End)
#include <iostream>
#include <vector>
using namespace std;
int main() {
	//c1 :Sử dụng các phương thức có sẵn trong thư viện :
	vector <int>  arr = { 10 , 20 , 30 , 40 , 100 };
	int n = arr.size();
	cout << "Mang truoc  khi xoa :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

	// Xóa phần tử ở cuối mảng :
	arr.pop_back();
	
	cout << "\nMang sau khi xoa :\n";
	for (int i = 0; i < n - 1; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}