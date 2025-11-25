/*	Cau truc du lieu ngan xep (Queue)
 Bai tap: liet ke so nhi phan.
 	Cho so tu nhien N . Hay in ra tat ca cac so nhi
 	phan tu 1 -> N;
 	
 	test :
 	
 	input:
 		2   // so luong test case
 		5
 		10
 		
 	output:
 	
 		1 10 11 100 101 
 		1 10 11 100 101 110 111 1000 1001 1010
*/
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector <string> res;
void init(){
	queue<string> q;
	q.push("1");
	res.push_back("1");
	while( res.size() < 10000 ){
		string top = q.front();
		q.pop();
		res.push_back(top + "0");
		res.push_back(top + "1");
		q.push(top + "0");
		q.push(top + "1");    
	} 
}
int main(){
	init();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for( int i = 0 ; i < n ; i++){
			cout << res[i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
