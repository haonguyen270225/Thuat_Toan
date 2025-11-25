// Quy hoach dong :
/*
 Bai  toan : Mot ten trom co mot cai tui co the mang cac do vat voi trong luong toi da la V .
 Hien tai ten trom muon lua chon cac do vat trong N do vat de an trom. Moi do vat co trong luong la w[i],
 va gia tri la v[i] . Hay xac dinh gia tri lon nhat cua cac do vat ma ten trom  nay lua chon sao cho trong luong cua chung khong vuot qua V.
 
 input :									output :
 
 	test 1:
	4 6											8
 	2 1 4 3
 	3 3 4 2
 	
 	test 2:
 	6 22										92
 	39 44 4 59 91 70 
 	47 26 92 33 6 96
 	
*/

// Cong thuc :
// dp[i-1][j] : Neu khong chon do vat thu i vao cai tui:
// max(dp[i-1][j] , dp[i-1][j-w[i]] + v[i]) : Neu lua chon do vat thu i vao tui .
#include<iostream>
#include<cstring>
#include <vector>
using namespace std;
int main(){
	int n = 0  , s = 0; // Nhap so luong do vat va khoi luong toi da ma balo co the mang;
	cin >> n >> s;
	//int w[n+1] , v[n+1];
	vector <int> w, v;
	for( int i = 1 ; i <= n ; i++) cin >> w[i];
	for( int i = 1 ; i <= n ; i++) cin >> v[i];
	
	//int dp[n+1][s+1];
	int dp[100][100];
	memset( dp , 0 , sizeof(dp));
	
	for( int i = 1 ; i <= n ; i++){
		for( int j = 1 ; j <= s ; j++){
			// Gia su ta khong lay do vat thu i;
			dp[i][j] = dp[i-1][j];
			if( j >= w[i] ){
				dp[i][j] = max( dp[i-1][j] , dp[i-1][j-w[i]] + v[i]);
			}
		}
	}
	cout << dp[n][s] << endl;
	// in ra bang phuong an;
	for( int i = 1 ; i <= n ; i++){
		for( int j = 1 ; j <= s ; j++){
			cout << dp[i][j]  << " ";
		}
		cout << endl;
	}
	
	return 0;
} 
 
