#include<iostream>
using namespace std;
void Nhi_Phan( int n){
	if( n == 0 ){
		return;
	}
	else{
		int r = n%2;
		Nhi_Phan(n/2);
		printf("%d",r);
	}
}
int main(){
	int n;
	cout << " Vui long nhap n :";
	cin >> n;
	do{
		if( n < 0 ){
			cout << " Gia tri khong hop le ( n > 0 ): ";
			cin >> n;
		}
	}while( n < 0 );
	Nhi_Phan(n);
	return 0;
}
