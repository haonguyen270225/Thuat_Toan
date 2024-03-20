#include<iostream>
#include<math.h>
using namespace std;
class SinhVien{
	private:
		int diem;
		string name;
		string diachi;
	public:
		void Nhap();
		void Xuat(){
			cout << "Thong tin sinh vien la : " << name << " " << diem << " " << diachi << endl;
		}
};
void SinhVien :: Nhap( ){
			cin>> diem;
			cin.ignore();
			getline( cin , name);
			getline( cin , diachi);
}
int main(){
	int n;
	cout << " Nhap so luong sinh vien :";
	cin >> n;
	SinhVien a[n];
	for( int i = 0 ; i < n ; i++){
		a[i].Nhap();
	}
	for( int i = 0 ; i < n ; i++){
		a[i].Xuat(); 
	}
	return 0;
}
