// Tim tong cua mang so nguyen bang de quy :

#include<iostream>
using namespace std;

int asum( int a[] , int n ){
	if( n == 1 ){
		return a[0];
	}
	else{
		return asum( a , n-1) +a[n-1];
	}
}
int main(){
	int a[] = { 1 , 2 , 3 , 4 , 5 , 6 };
	int n = sizeof(a) / sizeof(a[0]);
	
	cout << " Tong cac gia tri phan tu trong mang la : " << asum( a , n) << endl;
	
	return 0;
} 
