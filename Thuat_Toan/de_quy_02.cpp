#include<iostream>
using namespace std;
// tinh n! bang de quy !
 /*
 n! = n*(n-1)*(n-2) * ... 1;
 n! => 1 , n = 0;
 		n*(n-1);
 */
 
int gt( int n ){
	if( n == 0 ){
		return 1;
	}
	else{
		return n*gt(n-1);
	}
}
int main(){
	int n; cout << " Gia tri ban  muon tinh giai thua la :";
	cin >> n;
	cout << " ket qua cua  " << n << "! la :" << gt(n) << endl; 
	
	return 0;
}
