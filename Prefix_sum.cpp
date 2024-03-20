#include<iostream>
using namespace std;
int main(){
	int a[1005] , b[1005] = {0};
	int n ,q , l , r;
	cout << "\n Nhap so luong phan tu trong mang : ";
	cin >> n;
	for( int i = 1 ; i <= n ; i++ ){
		cin >> a[i];
	}
	cout << " \n Mang vua nhap la : \n";
	for( int i = 1 ; i <= n ; i++){
		cout << a[i] << " ";
	}
	for( int i = 1 ; i <= n ; i++){
		b[i] = b[i-1] + a[i];
	}
	cout << "\n Mang cong don la : \n";
	for( int i = 1 ; i <= n ; i++){
		cout << b[i] << " ";
	}
	 
	cout << "\n Nhap so lan ban muon kiem tra : ";
	cin >>q;
	while(q--){
		cin>>l>>r;
		cout << b[r] - b[l-1] <<endl;
	}
	return 0;
}
