
// xay dung thuat toan xap sep quick-sort bang phan hoach hoare;

//*Nhận xét:
//=>Độ phức tạp tốt nhất O(nlogn): Khi pivot luôn chia dãy thành hai phần bằng nhau.
//=>Độ phức tạp xấu nhất O(n^2):Khi pivot là phần tử lớn nhất or nhỏ nhất trong dãy.
//=>Trung bính O(nlogn) :do việt chọn pivot ngẫu nhiên nên tránh được các tình huống xấu nhất.
//=> Có nhiều cách chọn phần tử pivot đầu , cuối , giữa hoặc là ngẫu nhiên trong dãy.

#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;

int partition( int a[] , int left , int right ){
	int i = left - 1;
	int j = right + 1;
	int x = a[left];
	
	while(1){	
		do{
			++i;
		}while(a[i] < x);
		do{
			--j;
		}while( a[j] > x );
		if( i < j ){
			swap( a[i] , a[j] );
		}
		else{
			return j;
		}
	}
}
void quick_sort( int a[] , int left , int right ){
	if( left < right ){
		int pivot = partition(  a, left , right );
		quick_sort( a , left , pivot );
		quick_sort( a , pivot + 1 , right );
	}
}


int main(){
	int n;
	cout << " So luong phan tu trong mang la : ";
	cin >> n;
	srand(time(NULL));
	int a[n];
	
	for( int i = 0 ; i < n ; i++){
		a[i] = rand() % 100;
	}
	
	cout << " MAng truoc khi duoc xap sep la : \n";
	for( int i = 0 ; i < n ; i++){
		cout <<a[i] << " ";
	}
	
	quick_sort( a , 0 , n-1);
	cout << "\n Mang sau khi duoc xap sep la : \n";
	for( int i = 0 ; i < n ; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
	return 0;
}
