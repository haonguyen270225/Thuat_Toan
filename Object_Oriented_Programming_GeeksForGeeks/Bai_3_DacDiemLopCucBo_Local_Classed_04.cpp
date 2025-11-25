// 4 - Các phương thức thành viên của lớp cục bộ chỉ có thể truy cập các biến static và enum của hàm bao quanh . 
//Các biến non - static của hàm bao quanh không thể truy cập bên trong các lớp cục bộ.

// Chương trình 1 : Thực thi bình thường !
#include <iostream>
using namespace std;
void Fun() {
	static int x = 100;
	enum {i = 1 , j = 2};
	class Test {
	public :
		void Method() {
			cout << "x = " << x << endl;
			cout << "i = " << i << endl;
		}
	};
	
	// Sử dụng lớp cục bộ bên trong hàm  Test();
	Test t;
	t.Method();
}
int main() {
	cout << "\t Bai_3_DacDiemLopCucBo_Local_Classed_04.cpp" << endl;
	Fun();
	return 0;
}

// Chương trình 2 : Thực thi bị lỗi !
//#include <iostream>
//using namespace std;
//void Fun() {
//	// Error : reference to local variable of enclosing function is not allowed
//	// Không được tham chiếu đến biến cục bộ của hàm bao quanh.
//	int x = 100;
//	class Test {
//	public:
//		void Method() {
//			cout << "x = " << x << endl;
//		}
//	};
//
//	// Sử dụng lớp cục bộ bên trong hàm  Test();
//	Test t;
//	t.Method();
//}
//int main() {
//	cout << "\t Bai_3_DacDiemLopCucBo_Local_Classed_04.cpp" << endl;
//	Fun();
//	return 0;
//}