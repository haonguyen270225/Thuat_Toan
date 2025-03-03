//ky thuat tim kiem nhi phan (Binary_Search);
//=> Độ phức tạp thời gian : O(logn) trong cơ số của 2;
//=> Độ phức tạp về không gian : O(1) vì mỗi lần gọi đệ quy , một ngăn xếp mới được tạo ra.

#include<iostream>
using namespace std;
int Binary_search( int a[] , int n ,  int k ){
	int left = 0 , right = n - 1;
	while( left <= right ){
		int mid = ( left + right )/2;
		if( a[mid] == k ){
			return 1;
		}
		else if( a[mid] < k ){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	}
	return 0;
}
int main(){
	int n;
	int k;
	int a[100];
	
	cout << " Nhap so luong phan tu mang :";
	cin >> n;
	cout << " \n Nhap gia tri cac phan tu trong mang : \n";
	for( auto &x : a){
		cin >> x;
	}
	cout << "\n Mang ban vua nhap la : \n";
	for( auto x : a){
		cout << x << " ";
	}
	cout << " \n Gia tri ban muon tim kiem la : ";
	cin >> k;
	if( Binary_search( a , n ,  k)) cout << " Yes !";
	else cout << "No !";
	
	return 0;
}
