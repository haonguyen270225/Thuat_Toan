// Phan tich thua so nguyen to (khong liet ke kem so mu !);

#include<iostream>
#include<math.h>
using namespace std;

void PTTS_NT( int n){
	for( int i = 2 ; i <= sqrt(n) ; i++){
		while( n % i == 0){
			cout << i << " ";
			n /= i;
		}
	}
	if(n) cout << n << " ";
}

int main(){
	int n; cin >> n;
	PTTS_NT( n );
	return 0;
}
