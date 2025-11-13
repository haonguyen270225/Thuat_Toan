#include<iostream>
// tim so fibonasy thu n;

/*
f(n) => 1 , n =  1 , n = 2; (bai toan nho nhat !);
		f(n-1) + f(n-2);
*/

using namespace std;

int fibonasy( int n){
	if( n == 1 ||  n == 2 ){
		return 1;
	}
	else{
		return fibonasy( n - 1 ) + fibonasy( n - 2);
	}
}


int main(){
	int n;
	cout << " Vui long nhap gia tri n tu ban phim  (  n > 0 ): ";
	cin >> n;
	do{
		if( n <=  0 ){
			cout << " Gia tri nhap khong hop le (n > 0 ) : ";
			cin >> n;
		}
	}while( n <= 0 );
	
	cout << " So fibonasy thu  " << n << " la : " << fibonasy(n) << endl;
	
	return 0;
}
