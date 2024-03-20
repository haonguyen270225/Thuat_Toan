// bai toan kiem thanh pho linelend
/*
input :
4
-5 -2 2 7
output:
3 12
3 9
4 7
5 12
*/
#include<iostream>
using namespace std;
int max( int a, int b ){
	return ( a > b)?a:b;
}
int min( int a, int b ){
	return ( a < b )?a:b;
}
int main(){
	int n;
	cout << " Vui long nhap so luong thanh pho : ";
	cin >> n;
	int a[n];
	for( int i = 0 ; i < n ; i++){
		cin >>a[i];
	}
	
	for( int i = 0 ; i < n ; i++){
		if(i == 0) 
		cout << a[1] - a[0] << " " << a[n-1] - a[0] << endl;
		else if( i == n - 1 )
			cout << a[n-1] - a[n-2] << " " << a[n-1] - a[0] << endl;
		else cout << min(a[i] - a[i-1] , a[i+1] - a[i] ) << " " << max(a[n-1] - a[i] , a[i] - a[0] ) << endl;
	}
	
	return 0;
}
