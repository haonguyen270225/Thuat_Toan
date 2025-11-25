//Ưu điểm của OOP :
/*
	- Cấu trúc mã thành các đơn vị logic(Lớpm và đối tượng)
	- Giữ dữ liệu và phương thức liên quan với nhau
	- Làm cho mã có tính mô-đun , có thể tái sử dụng và mở rộng
	- Tuân theo nguyên tắc DRY (Không lập lại chính mình - Don`t Repeat Yourself).
*/
// Nhược điểm của OOP là :
/*
	- OOP có các khái niệm như lớp , đối tượng , kế thừa ,v.v... 
	-> Người mới học có thể gây nhầm lẫn và mất nhiều thời gian để học
	- Nếu viết chương trình nhỏ , việc viết theo kiểu OOP có thể gây cảm giác nặng nề 
	và có thể viết nhiều mã hơn so với mức cần thiết.
	- Mã chia thành nhiều lớp và nhiều Layer (tằng) khác nhau có thể gây khó khăn khi tìm kiếm và sửa lỗi.
	- OOP tạo ra rất nhiều đối tượng , do đó có thể sử dụng nhiều bộ nhớ hơn so với chương trình bình thường.

*/


#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	float salary;
public:
	Employee(string name, float salary) {
		this->name = name;
		this->salary =  salary;
	}
	string getName() { return this->name; }
	float getSalary() { return this->salary; }


	void setName(string Name) { this->name = Name; }
	void setSalary(float Salary) { this->salary = Salary; }

	void displayDistails() {
		cout << "Employee :" << name << endl;
		cout << "Salry :" << salary << endl;
	}
};

int main() {
	Employee a("nguyen van a", 12.05f);
	a.setName("nguyen van b");
	a.displayDistails();
	return 0;
}