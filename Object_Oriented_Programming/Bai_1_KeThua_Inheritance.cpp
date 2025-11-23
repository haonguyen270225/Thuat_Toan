#include <iostream>
using namespace std;

class Animal {
protected:
	string name;
public:
	Animal() { this->name = ""; }
	Animal(string name) {
		this->name = name;
	}
	void Eat() {
		cout << "Animal is eating ..... " << endl;
	}
	void Sleep() {
		cout << "Animal is sleeping ...." << endl;
	}
	string GetName() { return this->name; }
};

class Dog : public Animal{
public :
	Dog(string Name) {
		this->name = name;
	}
	void Bark() {
		cout << "Dog is barking ! " << endl;
	}
};
int main() {
	Animal a("Sara");
	a.Eat();
	a.Sleep();
	cout << a.GetName() << endl;

	Dog b("Lily");
	b.Bark();
	return 0;
}
