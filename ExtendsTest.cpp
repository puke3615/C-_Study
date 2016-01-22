#include<iostream.h>

using namespace std;

class Animal {
		string desc;
	public:
		string name;
		int age;
	protected:
		string sex;
};

class Dog : public Animal {
	public:
		string eye;
};

int main() {
	
	Dog d;
	Dog *dog = &d;
	dog->name = "√˚◊÷";		
	dog->age = 10;
	dog->eye = "¥Û—€æ¶";
	
	cout << "name = " << dog->name << "; age = " << dog->age << endl;
	
	return 0;
}

