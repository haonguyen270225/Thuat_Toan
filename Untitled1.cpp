// Thuat toan xap sep doi cho truc tiep;
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void Interchange_sort(int a[] , int n){
	for( int i = 0 ; i < n - 1 ; i++ ){
		for( int j = i + 1 ; j < n ; j++ ){
			if(a[i] >  a[j]){
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main(){
	int a[100] , n;
	cout << "Nhap so luong phan tu trong mang : ";
	cin >> n;
	
	srand(time(NULL));
	for(int i = 0 ; i < n ; i++ ){
		a[i] = rand() % 100 + 1;
	}
	cout << "Mang cua ban la : ";
	for( int i = 0 ; i < n ; i++ ){
		cout << a[i] << " ";
	}
	
	cout << endl;
	Interchange_sort(a , n);
	cout << "Mang ban sau khi xap sep la :";
	for( int i = 0 ; i < n ; i++ ){
		cout << a[i] << " ";
	}
	
	return 0;
}
