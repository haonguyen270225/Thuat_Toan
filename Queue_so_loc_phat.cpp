/*
	Bai tap: so loc phat
	Mot so duoc goi la so loc phat . Neu chi co hai chu so 6 va  8 . Cho so tu nhien N .
	Hay liet ke cac so loc phat khong qua N chu so . ( 1 < N < 15 );
	
	test :
		input:
			2
			2
			3
		output:
			88 86 68 66 8 6
			888 886 868 866 688 686 668 666 88 86 68 66 8 6
*/

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector <string> res;
void init(){
	queue<string>q;
	q.push("6");
	q.push("8");
	res.push_back("6");
	res.push_back("8");
	while(1){
		string top = q.front();
		q.pop();
		if(top.length() == 15){
			break;
		}
		res.push_back(top+"6");
		res.push_back(top + "8");
		q.push(top + "6");
		q.push(top + "8");   
	}    
}
int main(){
	init();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector <string> tmp;
		for( auto x : res){
			if( x.length() == n+1 ){
				break;
			}
			tmp.push_back(x); 
		}
		reverse(tmp.begin() , tmp.end());
		for( auto x : tmp ){
			cout << x << " ";
		}
		cout << endl;
		
	}
	
	return 0;
}
