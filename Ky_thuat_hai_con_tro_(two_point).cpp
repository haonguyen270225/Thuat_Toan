// ky thuat hai con tro two-pointers
/*
tim cap so trong mang khong giam 
sao cho tong bang voi voi so nguyen x (x nhap tu ban phim );
*/

/*
tu tuong : 
cho hai bien  l = 0 , r = n -1;
neu( l < r ) ta thuc hien :
kiem tra xem a[l] + a[r] > x : --r;
kiem tra xem a[l] + a[r] < x : ++l;
kiem tra xem a[l] + a[r] = x : in ra ket qua !;
*/
#include<iostream>
using namespace std;
int a[1000];
int main(){
	int n;
	cout <<" So luong phan tu trong mang la : ";
	cin >> n;
	for( int i = 0 ; i < n; i++){
		cin >> a[i];
	}
	
	int x;
	cout << " Gia tri ban muon kiem tra la :";
	cin >> x;
	int l = 0 , r = n-1;
	bool check = false;
	while( l < r){
		if( a[l] + a[r] == x ){
			check = true;
			break;
		}
		else if ( a[l] + a[r] > x){
			--r;
		}
		else{
			++l;
		}
		
	}
	
	if(check) cout << "Yes !";
	else cout << "No !";
	
	return 0;
}
