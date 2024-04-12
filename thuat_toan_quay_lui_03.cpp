
/*
bai tap: quay lui hoan vi n phan tu;

ma gia:
void Try( int i){
	// duyet qua cac gia tri ma x[i] co the nhan duoc:
	for( int j = 1 ; j <= n ; j++){
		// sem xet lieu rang co the gan x[i] = j hay khong ?
		if(used[j] == 0 ){
			x[i] = j;
			used[j] = 1;
			if( i == n ){
				inkq();
			}
			else{
				Try(i+1);
			}
			// backtrack;
			used[j] = 0;
		}
	}
}
// ham mian() ->  xay ung mang used[] co cac gia tri la 0 ->de kiem tra xem gia tri j da duoc su dung ? ;
*/

#include<iostream>
using namespace std;
int x[100] , used[100] , n;

void inkq(){
	for( int i = 1 ; i <= n ; i++){
		cout << x[i];
	}
	cout << endl;
}
void Try( int i ){
	for( int j = 1 ; j <= n ; j++){
		// kiem tra xem lieu co the lay gia tri cua j;
		if( used[j] == 0 ){
			x[i] = j;
			used[j] = 1;
			if( i == n){
				inkq();
			}
			else{
				Try(i+1);
			}
			// back_track;
			used[j] = 0; 
		}
	}
}


int main(){
	cin >> n;
	for( int i = 0 ;i < 100 ; i++){
		used[i] =0;
	}
	Try(1); 
	return 0;
}
