// Sang so nguyen to do phuc tap O(n)
// In ra cac so nguyen to 1->n voi n khong qua 10^6;
/*

b1) co tat ca cac phan tu trong mang tu 0 -> n la so nguyen to;
b2) Loai 0 va 1;
b3)Neu i la so nguyen to -> Ta duyet qua cac boi cua i va cho no khong la so nguyen to;

*/
#include<iostream>
#include<math.h>
using namespace std;
int prime[1000001];


void sieve(){
	
	//b1) co tat ca cac phan tu trong mang tu 0 -> n la so nguyen to;
	for( int i = 0 ; i <= 1000000 ; i++){
		prime[i] = 1;
	}
	//b2) Loai 0 va 1;
	prime[0] = prime[1] = 0;
	
	for( int i = 2 ; i <= sqrt(1000000) ; i++){
		// Neu i la so nguyen to ;
		if(prime[i]){
			//b3)Neu i la so nguyen to -> Ta duyet qua cac boi cua i va cho no khong la so nguyen to;
			for( int j = i*i ; j <= 1000000 ; j+= i){
				prime[j] = 0;
			}
		}
	}
}
int main(){
	sieve();
	int n;
	cout <<" Gia tri ban muon kiem tra la : ";
	cin >>n;
	for( int i = 0 ; i <= n ; i++){
		if(prime[i]) cout << i << " ";
	}
	return 0;
}
