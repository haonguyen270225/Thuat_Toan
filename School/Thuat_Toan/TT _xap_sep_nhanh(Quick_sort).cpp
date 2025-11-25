// Xay dung thuat toan sap xep nhanh quick_sort;
// Phan hoach lomuto (lomuto_partition);

// xay dung thuat toan xap sep quick-sort bang phan hoach hoare;

//*Nhận xét:
//=>Độ phức tạp tốt nhất O(nlogn): Khi pivot luôn chia dãy thành hai phần bằng nhau.
//=>Độ phức tạp xấu nhất O(n^2):Khi pivot là phần tử lớn nhất or nhỏ nhất trong dãy.
//=>Trung bính O(nlogn) :do việt chọn pivot ngẫu nhiên nên tránh được các tình huống xấu nhất.
//=> Có nhiều cách chọn phần tử pivot đầu , cuối , giữa hoặc là ngẫu nhiên trong dãy.
#include<bits/stdc++.h>
using namespace std;

int  partition( int a[] , int l , int  r){
	int x = a[r];
	int i = l - 1;
	for( int j = l ; j < r ; j++){
		if(a[j] <= x  ){
			++i;
			swap( a[i] , a[j]);
		}
	}
	++i;
	swap( a[i] , a[r] );
	return i;
}
void Quicksort(int a[] , int l , int r ){
	if( l >= r) return;
	int p = partition( a, l , r );
	Quicksort( a, l , p - 1);
	Quicksort( a, p + 1 , r );
}

int main(){
	int n; cin >> n;
	int a[n];
	srand(time(NULL));
	
	for( int i = 0 ; i < n; i++){
		a[i] = rand() % 100;
	}
	Quicksort( a, 0 , n-1);
	
	for( int i = 0 ; i < n; i++){
		cout << a[i] << " ";
	}
	
	return 0;
}
