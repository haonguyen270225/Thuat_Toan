
/*
Ky thuat quy haoch dong (dynamic programming);
Bai tap : Day con co tong bang S ( subset sum prolem ): Cho mang so nguyen A[] gom N phan tu va so 
nguyen duong S nhiem vu cua ban la hay xac dinh xem co the tao ra mot tap con co cac phan tu
co tong bang S hay khong ? Chu y moi phan tu trong mang chi duoc su dung 1 lan !

test 1:	
		input:
		8 92
		69 16 82 170 31 24 45 112
		
		output:
		1
test 2:
		input:
		4 9
		1 2 3 5
		
		output:
		1	
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , s;
	cin >> n >> s;
	int a[n+1];
	for( int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	
	vector <bool> dp( s+1 , false );
	dp[0] = true;
	
	for( int i = 1 ; i <= n ; i++){
		for( int j = s ; j >= a[i] ; j--){ // Can chu y !?
			if( dp[j - a[i]] == true ){
				dp[j] = true;
			}
		}
	}
	
	if(dp[s] == true) cout << 1 << endl;
	else cout << 0 <<  endl;
	
	
	return 0;
}
