// Ky thuat hai con tro!
/*
Nhap hai mang khong giam !
in ra mang moi tu hai mang da nhap sao cho mang moi cung la mang khong giam !
*/
#include<iostream>
using namespace std;
int a[1000] , b[1000];
int main(){
	int n ,m;
	cout << " So luong phan tu trong mang la a: ";
	cin >>n;
	
	for( int i = 0 ; i < n; i++){
		cout << " Nhap " << "a[" << i << "]= ";
		cin >> a[i];
	}
	cout << "\n So luong phan tu trong mang la b: ";
	cin >> m;
	for( int i = 0 ; i < m; i++){
		cout << " Nhap " << "b[" << i << "]= ";
		cin >> b[i];
	}
	
	int c[2000];
	int i1 = 0 , i2 = 0;
	int k = 0;
	
	while( i1 < n && i2 < m ){
		if( a[i1] < b[i2]){
			c[k] = a[i1];
			++i1;
		}
		else{
			c[k] = b[i2];
			++i2;
		}
		++k;
	}
	
	while(i1 < n){
		c[k] = a[i1];
		++i1;
		++k;
	}
	
	while( i2 < m ){
		c[k] = b[i2];
		++i2;
		++k;
	}
	
	
	cout << " Mang sau la : ";
	for( int i = 0 ; i < k ; i++){
		cout << c[i] << " ";
	}
	
	return 0;
}
