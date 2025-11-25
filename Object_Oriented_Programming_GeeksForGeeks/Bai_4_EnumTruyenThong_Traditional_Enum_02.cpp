// Enum truyền thống một số hạn chế :
// 2 - Không có biến cùng tên trong Enum  .
#include <iostream>
using namespace std;

enum Color {
	Red, Green, Blue
};

int main() {
	cout << "\t Bai_4_EnumTruyenThong_Traditional_Enum_02.cpp" << endl;
	Color c = Red;
	// int Green = 1; // Error : 'main::Green': redefinition; previous definition was 'enumerator' -> Green đẫ được định nghĩa trước đó .
	int Green1 = 100; // Cần tránh trùng tên biến trong enum.
	cout << c << endl << Green1 << endl;
	return 0;
}