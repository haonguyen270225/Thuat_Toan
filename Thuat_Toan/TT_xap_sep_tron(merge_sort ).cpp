//=> Độ phưc tạp về thời gian là O(nlogn);
//=> Độ phức tạp về không gian là O(n) do cần phải bổ sung để lưu trữ các mảng con trong quá trình trộn;
//=> Đây là thuật toán sắp xếp  ổn định.Nghĩa là 2 phần tử có cùng giá trị , thứ tự tương đối sẽ được bảo toàn sau khi xấp sếp.
#include<stdio.h>

void Merge(int a[1000] , int left , int middel , int right ){
	// ben trai : left -> middel;
	// ben phai : middel + 1 -> right;
	
	int len_left = middel - left + 1;
	int len_right = right - middel;
	
	// Tao mang tam thoi : 
	int a_left[len_left];
	int a_right[len_right];
	
	for( int i = 0 ; i < len_left ; i++){
		a_left[i] = a[left+i];
	}
	
	for( int i = 0 ; i < len_right ; i++){
		a_right[i] = a[middel + 1 +  i ];
	}
	// gop hai mang theo quy tac nho den lon :
// Vi tri hien tai cua mang ben trai;
	int i1 = 0;
// Vi tri hien tai cua mang ben phai :
	int i2 = 0;
	
	int k = left;
	while( i1 < len_left &&  i2 < len_right ){
		if(a_left[i1] <= a_right[i2]){
			a[k] = a_left[i1];
			++i1;
		}
		else{
			a[k] = a_right[i2];
			++i2;
		}
		++k;
	}
	
	// dua cac phan tu chua duoc dua vao mang :
	while( i1 < len_left ){
		a[k] = a_left[i1];
		++i1;
		++k;
	}
	
	while( i2 < len_right){
		a[k] = a_right[i2];
		++i2;
		++k;
	}
}
void Mergesort( int a[1000] , int left , int right ){
	if( left < right ){
		// Tim vi tri o giua :
		int middel = (left + right)/2;
		
		// Foi de quy sort tung phan ben trai va ben phai:
		
		Mergesort( a,  left , middel );
		Mergesort( a , middel + 1 ,  right );
		
		// Goi hai phan ben trai va be phai;
		
		Merge(a , left , middel , right);
	}
}
int main(){
	int n;
	
	printf(" Nhap n : ");
	scanf("%d",&n);
	int a[1000];
	for( int i = 0 ; i < n; i++){
		scanf("%d",&a[i]);
	}
	
	Mergesort( a , 0 , n-1);
	for( int i = 0 ; i < n ; i++){
		printf("%d   ",a[i]);
	}
	
	return 0;
}
