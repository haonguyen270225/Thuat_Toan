// 1 - Tên kiểu lớp cục bộ chỉ có thể được sử dụng trong hàm bao quanh .
// Chương trình 1 : Thực thi bình phường :
#include <iostream>
using namespace std;

void Fun() {
	
	// Lacal Classes
	class Test {
	public :
		void Method() {
			cout << "Local Classes Method() callesd !" << endl;
		}
	};
	
	// Sử dụng lớp cục bộ bên trong hàm fun().
	Test t;
	Test* tp = new Test();
	
	t.Method();
	tp->Method();
}
int main() {
	cout << "\t Bai_3_DacDiemLopCucBo_Local_Classes_01.cpp" << endl;
	Fun();
	return 0;
}

////Chương trinh 2 : Thực thị bị lỗi
//#include <iostream>
//using namespace std;
//
//void Fun() {
//	
//	// Lacal Classes
//	class Test {
//	public :
//		void Method() {
//			cout << "Local Classes Method() callesd !" << endl;
//		}
//	};
//}
//int main() {
//	// Sử dụng lớp cục bộ bên trong hàm main(). -> Error
//	Test t;
//	Test* tp;
//	t.Method();
//	tp->Method();
//	cout << "\t Bai_3_DacDiemLopCucBo_Local_Classes_01.cpp" << endl;
//	Fun();
//	return 0;
//}

