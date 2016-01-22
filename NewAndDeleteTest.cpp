#include<iostream.h>

using namespace std;

class Dog {
	public:
		int index;
		static int counter;
		
		Dog() {
			index = counter ++;
			cout << "生小狗 -- " << index << endl;
		}
		
		~Dog() {
			cout << "杀小狗 -- " << index << endl;
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
	cout << "【生】" << endl;
	Dog *dogs = new Dog[30];

	cout << endl;	
	cout << "【杀】" << endl;
	
	/**
	注： delete dogs:只会delete一个,Kill First
		 delete [] dogs:delete全部 
	
	**/
	delete [] dogs;
	
	return 0;
}
