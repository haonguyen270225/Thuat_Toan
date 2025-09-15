//Xóa : phần tử đầu khi biết vị trí cần xóa (Deletion : Given Position)
#include <iostream>
#include <vector>
using namespace std;
int main() {
	//c1 : Sử dụng các phương thức có sẵn trong thư viện :
	vector <int>  arr = { 10 , 20 , 30 , 40 , 100 };
	int n = arr.size();
	int position = 3;
	cout << "Mang truoc  khi xoa :\n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	
	// Xóa phần tử có vị trí position;
	arr.erase(arr.begin() + position - 1);

	cout << "\nMang sau khi xoa :\n";
	for (int i = 0; i < n - 1; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}