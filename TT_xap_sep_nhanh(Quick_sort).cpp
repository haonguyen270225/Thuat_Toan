// xay dung thuat toan xap sep quick-sort bang phan hoach hoare;
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
	
	cout << "\n Mang sau khi duoc xap sep la : \n";
	
	quick_sort( a , 0 , n-1);
	
	for( int i = 0 ; i < n ; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
