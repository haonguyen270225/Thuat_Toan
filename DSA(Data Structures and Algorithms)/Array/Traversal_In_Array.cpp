//Duyệt mảng (Traversal in Aray)
#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector <int> arr = { 10 , 20 , 30 , 40 , 100 , 600 , 1008 };
	
	// Cách 1: Duyệt mảng từ đầu đến cuối;
	cout << "Duyet mang tu dau den cuoi : \n";
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	
	// Cách 2 : Duyệt mảng từ cuối về đầu cuối về đầu mảng:
	cout << "\nDuyet mang tu cuoi ve dau phan tu : \n";
	for (int i = arr.size() - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	return 0;
}