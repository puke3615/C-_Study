#include<iostream.h>

using namespace std;

class Dog {
	public:
		int index;
		static int counter;
		
		Dog() {
			index = counter ++;
			cout << "��С�� -- " << index << endl;
		}
		
		~Dog() {
			cout << "ɱС�� -- " << index << endl;
		}
};

int Dog::counter = 0;

int main() {
	
	char *str = NULL;
	str = new char[20];
	
	str = "New...";
	
	cout << str << endl;
	
	delete str;
	
	cout << endl;
	cout << "������" << endl;
	Dog *dogs = new Dog[30];

	cout << endl;	
	cout << "��ɱ��" << endl;
	
	/**
	ע�� delete dogs:ֻ��deleteһ��,Kill First
		 delete [] dogs:deleteȫ�� 
	
	**/
	delete [] dogs;
	
	return 0;
}