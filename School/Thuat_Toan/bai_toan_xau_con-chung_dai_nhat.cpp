/*
LCS : Longest common subsequence 

Bai tap: xau con chung dai nhat
	Cho hai xau ki tu S va T , hay tim xau con chung dai nhat
	cua S va T .Cac == ki tu cua xau con khong nhat thiet phai lien
	ke nhau.
	
	input:
	Dong dau tien la sau S  , Dong thu hai la sau T;
	output:
	in ra do dai sau con chung dai nhat cau S va T.
	
text case:
	intput :
	
	abcadf
	acbaed
	
	outout:
	4
	
*/

#include<iostream>
using namespace std;
int main(){
	string s , t;
	cin >> s >> t;
	
	int n = s.size();
	int m = t.size();
	
	int dp[n+1][m+1];
	
	for( int i = 0 ; i <= n ; i++){
		for( int j = 0 ; j <= m ; j++){
			if( i == 0 || j == 0 ){
				dp[i][j] = 0;
			}
			else{
				if( s[i-1] == t[j-1] ){
					dp[i][j] = dp[i-1][j-1] + 1;
				}
				else{
					dp[i][j] = max( dp[i-1][j] , dp[i][j-1]);
				}
			}
		}
	}
	
	cout << dp[n][m] << endl;
	
	for( int i = 0 ; i <= n ; i++){
		for( int j = 0 ; j <= m ; j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
