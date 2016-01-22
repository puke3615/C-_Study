#include<iostream.h>

using namespace std;

struct People {
	string name;
	int age;
	string sex;
};

void print(People people) {
	cout << people.name << "--" << people.age << "--" << people.sex << endl;
} 

int main() {

	string name = "name";
	People p;
	for (int i = 0; i < 10; i ++) {
		p.name = name;
		p.age = i;
		p.sex = i % 2 == 0 ? "ÄÐ" : "Å®";
		print(p);
	}	
	
	return 0;
}

