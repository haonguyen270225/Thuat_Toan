// bai toan sau con dai nhat;

/*
	Bai tap: Cho sau S chi bao gom cac ky tu viet thuong va dai khong qua 1000 ky tu.
	Hay xau con con doi xung dai nhat cau S;

test 1:

	intput:
	abbcaac
	
	output:
	4

test 2:

	intput:
	madam
	
	output:
	5
	
*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s; cin >> s;
	int n = s.size();
	s = "x" + s;
	bool F[n+1][n+1];
	memset( F , false , sizeof(F));
	
	// xet cac xau con co do dai la 1;
	for( int i = 1 ; i <= n ; i++) F[i][i] = true;
	
	int ans = 1;
	
	// set cac sau con co do dai la 2;
	for( int len = 2 ; len <= n ; len++){
		for( int i = 1 ; i <= n-len+1 ; i++){
			int j = len + i - 1;
			if( len == 2 && s[i] == s[j]){
				F[i][j] = true;
			}
			else{
				F[i][j] = F[i+1][j-1] && ( s[i] == s[j]);
			}
			
			if( F[i][j] == true ){
				ans = max( ans , len);
			}
		}
	}
	
	cout << ans << endl;
	
	// bang ket qua;
	
	for( int i = 1 ; i <= n ; i++){
		for( int j = 1 ; j <= n ; j++){
			cout << F[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
