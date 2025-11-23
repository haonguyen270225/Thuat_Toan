#include<iostream>
// tinh tong s(n) = 1 + 2 + 3 + ... + n;
/*

s(n) => 1 , n = 1; ( bai toan con nho nhat !);
        n+(n-1);
*/

using namespace std;
 int tong( int n ){
 	if( n == 1){
 		return 1;
	}
	else{
		return n + tong(n-1);
	}
 }
 
 
int main(){
	int n; 
	cout << " Vui long nhap gia tri ma ban muon tinh tong :  ";
	cin >> n;
	cout << "\n ket qua la : ";
	cout << tong(n) << endl;
	return 0;
} 
