/*
Ma gia thuat toan  quay lui:
Try(int i ){
    for( j = <kha nang 1 > ; j <= <kha nang m > ; j++ ){
        if( <chap nhan kha nang j >){
            x[i] = j;
            if( i == n ){
                <thong bao cau hinh tim duoc !>;
            }
            else{
                Try(i+1);
            }
        }
    }
}
*/

//Xay dung xau nhi phan co do dai n; 
#include<iostream>
using namespace std;
int n , x[100];

void inkq(){
    for( int i = 1 ; i <= n ; i++){
        cout << x[i];
    }
    cout << endl;
}

void  Try(int i ){
    for( int j = 0 ; j <= 1 ; j++){
        x[i] = j;// vi tri thu i = j;
        if( i == n ){
            inkq();
        }
        else{
            Try(i+1);
        }
    }
}


int main(){
    cin >>n;
    Try(1);
    return 0;
}
