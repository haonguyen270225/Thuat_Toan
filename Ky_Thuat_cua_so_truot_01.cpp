#include<iostream>
using namespace std;
// xay dung ky thuat cua so truot;
/*
Cho mang so nguyen n phan tu va so nguyen duong k . Tim day con lien tiep
cua mang co do dai la k ssao cho tong cac phan tu trong mang cua day con la lon nhat 
va liet ke cac day con do . Neu co nhieu day con co cung tong lon nhat thi in ra day con 
dau tien.

input : 												output :
	1  //so luong text case								24 
	10 3												7 8 9
	1 2 3 1 5 2 7 8 9 1
*/
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		int a[10005];
		
		for( int i = 0 ; i < n ; i++) cin >> a[i];
		int sum = 0 , idex;
		
		for( int i = 0 ; i < k ; i++) sum += a[i];
		int res = sum , index = 0;
		
		for( int i = k ; i < n ; i++){
			sum = sum - a[i-k] + a[i];
			
			if( sum >  res ){
				res = sum;
				index = i - k + 1;
			}
			
		} 
		cout << res << endl;
		for( int i = 0 ; i < k ; i++){
			cout << a[i+index] << " ";
		}
		cout << endl;
	}	
	
	return 0;
}
