// Sang so nguyen to do phuc tap O(nlog(n));
#include<iostream>
#include<math.h>
// In ra cac so nguyen to tu 1 -> n;

int prime( int n ){
	for( int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0 ) return 0;
	}
	return n > 1;
}

using namespace std;
int main(){
	
	int n;
	cout << " Vui long nhap gia tri ban muon in den : ";
	cin >> n;
	
	for( int i = 0 ; i <= n ; i++){
		if(prime (i)) cout << i << " ";
	}
	
	return 0;
}
