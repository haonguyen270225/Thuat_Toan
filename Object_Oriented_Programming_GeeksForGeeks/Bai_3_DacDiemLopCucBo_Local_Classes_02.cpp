// 2 - Tất cả phương thức bên trong lớp cục bộ phải được định nghĩa bên trong lớp đó .

// Chương trình 1 : Thực thi bình thường
#include <iostream>
using namespace std;

void Func() {
	//Local classes
	class Test {
	public:
		void Method() {
			cout << "Local Class Method() calles ! " << endl;
		}
	};
	// Sử dụng lớp cụ bộ bên trong hàm Func();
	Test t;
	Test* tp = new Test();
	t.Method();
	tp->Method();
}


int main() {
	cout << "\t Bai_3_DacDiemLopCucBo_Local_Classes_02.cpp" << endl;
	Func();
	return 0;
}



//// Chương trình 2 : Thực thi bị lỗi .
//#include <iostream>
//using namespace std;
//
//void Func() {
//	//Local classes
//	class Test {
//	public:
//		void Method();
//	};
//	// Định nghĩa bên ngoài Class Test ->Error :
//	// member function "Test::Method" may not be redeclared outside its class  -- không được khai báo lại bên ngoài lớp đó.
//	void Test::Method() {
//		cout << "Local Class Method() calles ! " << endl;
//	}
//	// Sử dụng lớp cụ bộ bên trong hàm Func();
//	Test t;
//	Test* tp = new Test();
//	t.Method();
//	tp->Method();
//}
//
//
//int main() {
//	cout << "\t Bai_3_DacDiemLopCucBo_Local_Classes_02.cpp" << endl;
//	Func();
//	return 0;
//}
