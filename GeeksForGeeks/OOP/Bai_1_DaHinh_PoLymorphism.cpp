#include<iostream>
using namespace std;
// Có hai loại đa hình  trong C++:
/*
	Function Overloading (Nạp chồng hàm)
	Function Overriding (ghi đè hàm)
*/

class Parent {
public:
	//Overloaded method
	void Func() {
		cout << "Parent.func()" << endl;
	}

	virtual void Func(int a) {
		cout << "Parent.Func(int) : " << a << endl;
	}
};

class Child :public Parent {
	// Overrides Parent.func(int);
public:
	void Func(int a) override {
		cout << "Chill.Func(int) :" << a << endl;
	}
};


int main() {
	Parent parent;
	Child child;
	Parent* polymorphicObj = new Child();

	// Method overloading (compile-time)
	parent.Func();
	parent.Func(10);
	// Method Overriding (runtime)
	child.Func(20);

	//Pomorphism in action
	polymorphicObj->Func(30);
	return 0;
}
