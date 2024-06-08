//ky thuat tim kiem nhi phan (Binary_Search);
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
	cout << " Nhap so luong phan tu mang :";
	cin >> n;
	int a[n];
	cout << " \n Nhap gia tri cac phan tu trong mang : \n";
	for( auto &x : a){
		cin >> x;
	}
	cout << "\n Mang ban vua nhap la : \n";
	for( auto x : a){
		cout << x << " ";
	}
	int k;
	cout << " \n Gia tri ban muon tim kiem la : ";
	cin >> k;
	if( Binary_search( a , n ,  k)) cout << " Yes !";
	else cout << "No !";
	return 0;
}
