
//Enum - enumerated types : là kiểu dữ liệu do người dùng định nghĩa . trong C++. 
// Tuy nhiên Enum truyền Enum truyền thống  có một số hạn chế so với Enum Class được giới 
// thiệu trong phiên bản C++11;

/*
	- Một số đặc điểm của Enum truyền thống:
	1 - Là tập hợp các hằng số nguyên (int) được đặt tên , 
	nghĩa là mỗi phần tử được gán giá trị nguyên
	2 - Được khai báo bằng từ khóa Enum.

	- Một số hạn chế của enum truyền thống :
	1 - Hai Enum không thể có cùng tên .
	2 - Không có biến cùng tên trong Enum  .
	3 - Enum không an toàn về mật kiểu dữ liệu .

*/
#include <iostream>
using namespace std;

enum Color { // Khai báo enum 
	Green , Red , Blue
};

int main() {
	enum Color c = Green , c1 = Red , c2 = Blue;
	/*c = Green;
	c1 = Red;
	c2 = Blue;*/
	cout << c << endl;
	cout << c1 << endl;
	cout << c2 << endl;
	cout << "Size of Color variable : " << sizeof(Color) << endl;
	return 0;
}