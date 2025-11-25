// 5 -  Các lớp cục bộ có thể truy cập các kiểu dữ liệu toàn cục , biến và hàm .
//Ngoài ra, các lớp cục bộ cũng có thể truy cập các lớp cục bộ khác của cùng một hàm .

#include <iostream>
using namespace std;
// Khai báo biến cục bộ. - global
int x = 10;
void Fun() {
	class Test1{
	public:
		Test1() { cout << "Test1::Test1()" << endl; }
	};

	class Test2 {
		Test1 t1; // Sử dụng lớp cục bộ khác.
	public:
		void Method() {
			cout << "x = " << x << endl; // Sử dụng biến cục bộ.
		}
	};
	Test2 t;
	t.Method();
}

int main() {
	cout << "\tBai_3_DacDiemLopCucBo_Local_Classes_05.cpp" << endl;
	Fun();
	return 0;
}