// Thuat_toan_quay_lui;
/*
bai tap : liet ke cac to hop chap k  cua n : x1 , x2 , ... xn;

- ma gia :
void Try( int i){	
	for( int j = x[i-1] + 1 ; j <= n-k+i ; j++){
		x[i] = j;
		if( i == k ){
			inkq();
		}
		else{
			Try(i + 1);
		}
	}
}
 *luu y: gia tri = cua j tai vi tri i: di tu min -> max;
 voi min = x[i-1] + 1;
 max =  n - k + i;
 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int x[100] , k  ,  n;
void inkq(){
	for( int i = 1 ; i <= k; i++){
		cout << x[i];
	}
	cout << endl;
}


void Try(int i){
	for( int j = x[i-1] + 1 ; j <= n-k+i ; j++){
		x[i] = j;
		if( i == k ){
			inkq();
		}
		else{
			Try(i+1);
		}
	}
}


int main(){
	cin>> k >> n ;
	x[0] = 0;
	Try(1);
	return 0;
}
