#include<iostream.h>

using namespace std;

class Animal {
	public:
		virtual void say() = 0;
};

class Dog : public Animal {
	public:
		void say() {
			cout << "A dog ..." << endl;
		}
};

class Cat : public Animal {
	public:
		void say() {
			cout << "A cat ..." << endl;
		}
};


int main() {
	Animal *a1, *a2;
	
	Dog dog;
	dog.say();
	Cat cat;
	cat.say();
	
	cout << endl;
	
	a1 = &dog;
	a1->say();
	a2 = &cat;
	a2->say();
	
	return 0;
}
