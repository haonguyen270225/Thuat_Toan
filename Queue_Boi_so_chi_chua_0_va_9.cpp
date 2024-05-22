/* Cau truc du lieu hang doi (queue).
 Bai tap : Boi so chi chua 0 va 9.
 	Cho so tu nhien N . Hay tim so nguyen duong X nho nhat duoc tao boi so 9 va 0 
 	chia het cho N . Vi du voi N = 5 ta se tim ra duoc X = 90; ( N <= 100);
 	
 test :
 	input:
 		2    // so luong test case
 		5
 		7
 	
 	output:
 	
 		90 
 		
 		9009
*/

#include<iostream>
#include<queue>
#include<vector>
using namespace std;
using ll = long long;

vector <ll> res;
ll ans[101];

void init(){
	queue <string> q;
	q.push("9");
	res.push_back(9);
	while(1){
		string top = q.front();
		q.pop();
		if( top.length() == 10 ){
			break;
		}
		res.push_back(stoll(top + "0"));
		res.push_back(stoll(top + "9")); 
		q.push(top + "0");
		q.push(top + "9");  
	}
	for( int i = 1 ; i <= 100; i++){
		for( ll x : res){
			if( x % i == 0 ){
				ans[i] = x;
				break;
			}
		}
	}
}
int main(){
	init();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << ans[n] << endl;
	}
	
	return 0;
}
