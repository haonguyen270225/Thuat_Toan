#include <iostream>
/*
    Cấu trúc của Propressor : Bộ tiền sử lý;
    #define Tên_Macro Tên_thay_thế
*/
#define PI 3.14 // macro có thể là tên thay thế , một loại viết tắt;
#define sum( a , b )  a * b // macro có thể là hàm chứa tham số;
#define sum2(a , b) (a) * (b) 
#define concat( a , b) a##b // Sử dụng ## để nối các token lại với nhau trong macro;
// Sử dụng '\' để nối các dòng trong macro nếu cần thiết;
#define pritf_loop(i,limit) \
     while(i < limit) \
    { \
        cout << "i = " << i << endl; \
        i++; \
    }

// Lưu ý : macro chi thực  hiện thay thế chứ không thực hiện tính toán;
// Lưu ý : macro không có dấu chấm phẩy ở cuối dòng; 
// Lưu ý : macro không có kiểu dữ liệu; 
// Lưu ý : macro không có phạm vi;
//Lưu ý : Nên hạn chế sử dụng macro có các tham số vì nó có thể xảy ra một số lỗi không mong muốn khi thực hiện tính toán;

using namespace std;
int main()
{
    cout << "\n Bo tien xu ly! \n";
    cout << "---Demo Preprocessor ---\n";
    cout << "Value is PI = " << PI << endl;
    cout << "Call sum(10 , 20) = " << sum(10 , 20) << endl;
	// Lưu ý : macro chi thực  hiện thay thế chứ không thực hiện tính toán;
    cout << "Call sum(15 , 25) = " << sum(15 , 25) << endl; // macro sẽ thay thế trực tiếp vào code;
    cout << "Call sum(10 + 5 , 20 + 5) = " << sum(10 + 5 , 20 + 5) << endl; // macro sẽ thay thế trực tiếp vào code;
	cout << "Call sum2(10 + 5 , 20 + 5) = " << sum2(10 + 5 , 20 + 5) << endl; // macro sẽ thay thế trực tiếp vào code;
	// Sử dụng ## để nối các token lại với nhau trong macro;
    cout << "Su dung ## : " << concat(10, 00) << endl;
    int  a = concat(10, 00) * 10;
	cout << "Gia tri a = " << a << endl;
	int i = 0; // Nên hạn chế sử dụng macro có các tham số vì nó có thể xảy ra một số lỗi không mong muốn khi thực hiện tính toán;
    pritf_loop(i, 5) // Sử dụng macro để lặp;
    
	return 0;
}

