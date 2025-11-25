// Enum truyền thống một số hạn chế :
// 1 - Không có hai enum cùng tên :
#include <iostream>
using namespace std;

enum Color {
	Red , Green , Blue
};

//enum Color { // Error : 'Color': 'enum' type redefinition -> cần định nghĩa lại Color.
//	Yellow , Violet , Orange
//};
enum Color1 { // Cần tránh đặt trùng tên.
	Yellow , Violet , Orange
};

int main() {
	cout << "\t Bai_4_EnumTruyenThong_Traditional_Enum_01.cpp" << endl;
	Color c = Red;
	cout << c << endl;
	Color1 c1 = Yellow;
	cout << c1 << endl;
	return 0;
}