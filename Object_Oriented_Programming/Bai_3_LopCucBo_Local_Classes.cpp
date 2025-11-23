#include <iostream>
using namespace std;
// Cách khai báo 1 lớp cục bộ bên trong 1 hàm.
void Fun() {
	class Test { // Local Class
	public:
		void Method() {
			cout << "Local Classes Method() called!" << endl;
		}
	};
	Test t;
	Test* tp = new Test();
	t.Method();
	tp->Method();
}

int main() {
	Fun();
	return 0;
}

// Các đặc điểm của lớp cục bộ :
/*
	1 - Tên kiểu lớp cụ bộ chỉ có thể được sử dụng trong hàm bao quanh.
	2 - Tất cả các phương thức của lớp cục bộ phải được định nghĩa bên trong lớp đó.
	3 - Lớp cụ bộ không thể chứa các thành viên dữ liệu tính . Nhưng nó có thể chứa các hàm tĩnh .
	4 - Các phương thức thành viên của lớp cục bộ chỉ có thể truy cập các biến static và enum của hàm bao quanh . 
	Các biến non - static của hàm bao quanh không thể truy cập bên trong các lớp cục bộ.
	5 - Các lớp cục bộ có thể truy cập các kiểu dữ liệu toàn cục , biến và hàm .
	Ngoài ra , các lớp cục bộ cũng có thể truy cập các lớp cục bộ khác của cùng một hàm .
*/