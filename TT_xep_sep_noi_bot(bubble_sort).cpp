// giai thuat xap sep  noi bot (bubble_sort); => O(n^2);
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void bubble_sort( int a[] , int n ){
	for( int i = 0; i < n-1 ; i++){
		for( int j = 0 ; j < n-1 ; j++){
			if( a[j] > a[j+1]){
				swap(a[j] , a[j+1]);
			}
		}
	}
}
//Tối ưu thuật toán:
/*
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)       
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
*/
 // Chú ý ngay cả khi mảng đã được xấp sếp thì for vẫn thực hiện so sánh => O(n^2);
//=> Ta có thể tối ưu bằng cách dugwf vòng lặp khi dòng for ở trong không có bất thì thay đổi nào.
/*
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   bool swapped; 
   for (i = 0; i < n-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
           swap(&arr[j], &arr[j+1]); 
           swapped = true; 
        } 
     } 
     if (swapped == false) 
        break; 
   } 
} 
*/

int main(){
	int n; cin >> n;
	int a[n];
	for( int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	bubble_sort( a , n);
	for( int i = 0 ; i < n ; i++){
		cout << a[i] << " ";
	}
	return 0;
}
