#include<iostream>
using namespace std;
// tinh to hop chap k cua n :
/*
kcn =>  1 , k = 0  , n = k;( bai toan nho nhat !);
		k-1Cn-1 + kCn-1;
*/

int knc( int k , int n ){
	if( k == 0 || n == k ){
		return 1;
	}
	else{
		return knc(k - 1 , n-1 ) + knc( k , n-1);
	}
}


int main(){
	int k , n;
	cout << " Vui long nhap k va n :";
	cin >>k>>n;
	cout << " to hop chap " << k << " cua " << n << " la :" << knc( k , n) << endl;
	return 0;
} 
