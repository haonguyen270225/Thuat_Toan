// Enum truyền thống một số hạn chế :
// 3 - Enum không an toàn về mật kiểu dữ liệu.
#include <iostream>
using namespace std;

enum Color {
	Red, Green, Blue
};

enum People {
	Bad , Good
};

int main() {
	cout << "\t Bai_4_EnumTruyenThong_Traditional_Enum_03.cpp" << endl;
	Color c = Red;
	People p = Bad;
	if (c != Color::Green) {
		cout << "c it`s not Green ! " << endl;
	}
	if (p != People::Good) {
		cout << "p it`s not Good boy !" << endl;
	}
	
	if (p == c) {
		cout << "p it`s color !"; // Sai logic vì các biến trong  Color và People đều được chuyền đổi ngằm định sang int;
	}
	return 0;
}