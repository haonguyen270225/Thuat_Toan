#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
#include <iomanip>
#include <iostream>
using namespace  std;
#define MAX_SinhVien 50

class TienIch{
	public:
	static bool  KiemTraDiem(float diem);
	static  bool KiemTraTen(char ten[]);
	static void ChuanHoaTen( char ten[]);
};
void TienIch::ChuanHoaTen(char ten[]){
	// Xoa khoan trang 
	for( int i = 0 ; i < strlen(ten) ; i++ ){
		if(ten[i] == ' ' &&  (ten[i+1] == ' ' || ten[i+1] == '\n')){
			for( int j = i ; j < strlen(ten) ; j++){
				ten[j] = ten[j+1];
			}
			strlen(ten)-1;
			i--;
		}
	}
	for( int i = 0 ; i < strlen(ten) ; i++ ){
		if(ten[i] != ' '){
			ten[i] = tolower(ten[i]);
		}
	}
	// Chuan hoa chuoi;
	char tmp[100] = "";
	char *token;
	token = strtok(ten , " ");
	while(token != NULL ){
		token[0] = toupper(token[0]);
		strcat(tmp , token);
		strcat(tmp , " ");
		token = strtok(NULL , " ");
	}
	strcpy(ten,tmp);
}

bool TienIch::KiemTraTen(char ten[]){
	for( int i = 0 ; i < strlen(ten) ; i++){
		if(isalpha(ten[i]) == 0 && ten[i] != ' '){
			return false;
		}
	}
	return true;
}
bool TienIch::KiemTraDiem(float diem){
	if( diem >= 0 && diem <= 10 ){
		return true;
	}
	return false;
}

// Xay dung hai lop sinh vien va giao vien de quan ly;

class SinhVien{
	protected:
		char maSinhVien[20];
		char tenSinhVien[30];
		char ngaySinh[20];
		char diaTri[20];
		float diemToan;
		float diemVan;
		float diemHoa;
		float diemTB;
	public:
		void NhapSinhVien();
		void XuatSinhVien();
		void TinhDiemTB();
};

void SinhVien :: NhapSinhVien(){
	cout <<"Ma sinh vien : ";
	cin >> maSinhVien;
	cin.ignore();
	cout << "Ten sinh vien :";
	gets(tenSinhVien);
	do{
		if(TienIch::KiemTraTen(tenSinhVien) == false ){
			cout << "Ten khong hop le (Ten chi chua chu cai) :";
			gets(tenSinhVien);
		}
		TienIch::ChuanHoaTen(tenSinhVien);
	}while(TienIch::KiemTraTen(tenSinhVien) == false);
	cout << "Ngay sinh : ";
	gets(ngaySinh);
	cout <<"Diem Toan :";
	cin >> diemToan;
	do{
		if(TienIch::KiemTraDiem(diemToan) == false){
			cout << "Diem khong hop le (0 <= diem <= 10 ) : ";
			cin >> diemToan;
		}
	}while(TienIch::KiemTraDiem(diemToan) == false);
	cout << "Diem Van :";
	cin >> diemVan;
	do{
		if(TienIch::KiemTraDiem(diemVan) == false){
			cout << "Diem khong hop le (0 <= diem <= 10 ) : ";
			cin >> diemVan;
		}
	}while(TienIch::KiemTraDiem(diemVan) == false);
	cout << "Diem Hoa :"; 
	cin >> diemHoa;
	do{
		if(TienIch::KiemTraDiem(diemHoa) == false){
			cout << "Diem khong hop le (0 <= diem <= 10 ) : ";
			cin >> diemHoa;
		}
	}while(TienIch::KiemTraDiem(diemHoa) == false);
	TinhDiemTB();
}

void SinhVien :: XuatSinhVien(){
	cout<< maSinhVien <<" \t\t\t "<<tenSinhVien<<" \t\t "<<ngaySinh<<" \t "<<diemToan<<" \t " << diemVan <<" \t "<<diemHoa<<" \t "<<diemTB<<"\n";
}

void SinhVien :: TinhDiemTB(){
	diemTB = (diemToan + diemVan + diemHoa ) / 3;
}

class Lop : public SinhVien
{
	private:
		SinhVien LopSV[MAX_SinhVien];
		char maLop[20];
		char tenLop[20];
	public:
		static int soLuong;
		//Lop();
		void NhapLop();
		void XuatLop();
};
int Lop::soLuong = 0;
void Lop :: XuatLop(){
	cout << "Ma lop  " << "\t" << "Ten Lop" << endl;
	cout << maLop << "\t" << tenLop << endl;
	cout<<"Ma sinh vien \t\t  Ho ten \t\t  Nam Sinh \t Toan \t Van \t Hoa \t Diem Trung Binh \n";
	for(int i = 0 ; i < soLuong ; i++ ){
		LopSV[i].XuatSinhVien();
	}
}
void Lop :: NhapLop(){
	if(soLuong >= 50 ){
		cout << "\n So luong sinh vien da >= 50 !\n";
		return;
	}
	else{
		if(soLuong == 0){
			cout << "\n Nhap ma lop : ";
			cin >> maLop;
			cin.ignore();
			cout << "\n Nhap ten lop :";
			cin >>  tenLop;
			cin.ignore();
		}
		char Chon;
		int i = Lop::soLuong;
		do{
			cout << "Nhap sinh vien thu " << i+1 << ":\n";
			LopSV[i].NhapSinhVien();
			Lop::soLuong++;
			++i;
			cout <<"\n  Tiep tuc - Khong (T-K) : ";
			cin >> Chon;
			if(tolower(Chon) != 't'){
				return;
			}
		}while(soLuong < 50 );
	}
}

int main(){
	Lop a;
	a.NhapLop();
	a.XuatLop();
	return 0;
}
