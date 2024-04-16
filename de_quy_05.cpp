// bai tap tim gia tri lon nhat trong mang so nguyen bang de quy:
#include<iostream>

using namespace std;
int amax( int a[] , int n){
	if( n == 1 ){
		return a[0]; //  base case ( truong hop co so !);
	}
	else{ // general case ( truong hop tong quat !); 
		int m = amax( a , n-1);
		if( a[n-1] > m){
			return a[n-1];
		}
		else{
			return m;
		};
	}
}

/*
- cach 2 :
	int amax( int a[] , int n ){
	
		//base case ( truong hop co so !);
		if( n == 1){
			return  a[n-1]
		}
		else{ // general case ( truong hop tong quat !); 
			return amax(a , n -1) > a[n-1] ?  amax(a , n-1) : a[n-1]; 
		}
	}
*/
int main(){
	int a[] = { 1 , 15 , 10 , 34 , 105 ,22 };
	
	int n = sizeof(a)/sizeof(a[0]);
	
	cout << " Gia tri lon nhat trong mang la  : " << amax( a , n) << endl;
	return 0;
}


