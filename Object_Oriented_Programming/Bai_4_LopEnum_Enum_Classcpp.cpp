// Lớp Enum - Enum Class : 
// Được giới thiệu trong C++11 
// còn được gọi là Scoped Enumerational - enum có phạm vi;
/*
	- Mốt số đặc điểm của enum class:
	1 - Enum class không cho phép chuyển đổi ngằm định sang kiểu int;
	2 - Enum class không cho phép so sánh các giá trị của hai enum khác nhau .
	3 - Để định nghĩa enum , ta sủ dụng từ khóa 'class' sau từ khóa enum .
*/

#include <iostream>
using namespace std;
// Khai báo enum class:
 enum class Color {
	Red , Green , Blue
};

int main() {
	cout << "\t Bai_4_LopEnum_Enum_Classcpp.cpp\n";
	Color col = Color::Blue;
	cout << int(col) << endl;
	return 0;
}