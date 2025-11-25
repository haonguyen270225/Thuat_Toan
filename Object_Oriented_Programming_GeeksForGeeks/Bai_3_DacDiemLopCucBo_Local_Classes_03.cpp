// 3 - Lớp cục bộ không thể chứa các thành viên dữ liệu tĩnh . Nhưng có thể chứa các hàm tĩnh.

// Chương trình 1 : Thực thi bình thường
#include <iostream>
using namespace std;
void Fun() {
	class Test {
	public:
		static void Method() {
			cout << "Static Method() called !" << endl;
		}
	};
	Test::Method();
}
int main() {
	cout << "\t Bai_3_DacDiemLopCucBo_Local_Classes_03.cpp" << endl;
	Fun();
	return 0;
}

// Chương trình 2 : Thực thi bị lỗi.
//#include <iostream>
//using namespace std;
//void Fun() {
//	class Test {
//		// lỗi : static data member declaration is not allowed in this class
//		// Khai báo thành viên dữ liệu tĩnh không được phép .
//	private :
//		static int i;
//	public:
//		static void Method() {
//			cout << "Static Method() called !" << endl;
//		}
//	};
//	Test::Method();
//}
//int main() {
//	cout << "\t Bai_3_DacDiemLopCucBo_Local_Classes_03.cpp" << endl;
//	Fun();
//	return 0;
//}
