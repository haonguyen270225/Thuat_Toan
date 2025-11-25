#include<iostream>
#include<ctime>
using namespace std;

void heapify( int a[] , int n , int i ){
	int left = 2*i + 1;
	int right = 2*i + 2;
	int largest = i;
	if( left < n && a[left] > a[largest]){
		largest = left;
	}
	if( right < n && a[right] >  a[largest] ){
		largest = right;
	}
	if( largest != i){
		swap( a[i] , a[largest]);
		heapify( a , n , largest);
	}
}

void heapsort( int a[] , int n ){
	for( int i = n / 2 - 1 ; i >= 0 ; i--){
		heapify( a , n , i);
	}
	
	for( int i = n - 1; i >= 0 ; i--){
		swap( a[0] , a[i] );
		
		heapify( a, i , 0 );
	}
}

int main(){
	int n;
	cout << " Nhap so luong phan tu ban muon xap sep (n >= 3) : ";
	cin >> n;
	do{
		if( n < 3 ) {
			cout << " Du lieu khong hop le (n >= 3) , nhap lai n :";
			cout << n;
		}
	}while( n < 3);
	int a[n];
	srand(time(NULL));
	
	for( int i = 0 ; i < n; i++){
		a[i] = rand() % 100;
	}
	heapsort(a ,n);
	for( int i = 0 ; i < n; i++){
		cout << a[i] << " ";
	}
	
	return 0;
}
