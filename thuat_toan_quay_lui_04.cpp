/*
bai toan quay lui n queen :
  Su dung cot[] , d1[] , d2[] de danh dau cot , duong cheo xuoi va duong cheo nguoc !

cong thuc tinh duong cheo xuoi la : i-j+n;
cong thuc tinh duong cheo nguoc la : i+j-1;

*/

#include<bits/stdc++.h>
using namespace std;

int n , x[100] , cot[100] , d1[100] , d2[100];
int a[100][1000];
int cnt = 0; // dem so cach dat n quan hau;

int inkq(){
	memset( a , 0 , sizeof(a));
	for(int i = 1 ; i <= n ; i++){
		a[i][x[i]] = 1;
	}
	for( int i = 1 ; i <= n ; i++){
		for( int j = 1 ; j <= n ; j++){
			cout << a[i][j];
		}
		cout <<endl;
	}
	cout <<endl;
}


void Try( int i){
	// duyet qua kha nang ma cot x[i] co the nhan;
	for( int j = 1 ; j <= n ; j++){
		// gan x[i] = j neu duoc;
		if( cot[j] == 1 && d1[i-j+n] == 1 && d2[j+i-1] == 1){
			x[i] = j;
			cot[j] = d1[i-j+n] = d2[i+j-1] = 0;
			if( i == n ){
				inkq();
				++cnt;
			}
			else{
				Try( i+1);
			}
			//back_track;
			cot[j] = d1[i-j+n] = d2[i+j-1] = 1;
		}
	}
}


int main(){
	cin >> n;
	for( int i = 1 ; i < 100 ; i++){
		cot[i] = d1[i] = d2[i] = 1;
	}
	Try(1);
	cout << " Co " << cnt << " cach xap sep !";
	
	return 0;
}

