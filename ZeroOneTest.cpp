#include<iostream.h>
using namespace std;

int main() {
	
	int a = 60;
	int b = 13;
	
	int r = a & b;
	cout << "a & b = " << r << endl;
	
	r = a | b;
	cout << "a | b = " << r << endl;
	
	r = a ^ b;
	cout << "a ^ b = " << r << endl;
	
	r = ~a;
	cout << "~a = " << r << endl;
	
	r = ~b;
	cout << "~b = " << r << endl;
	
	r = a << 3;
	cout << "a << 3 = " << r << endl;
	
	r = a >> 3;
	cout << "a >>3 = " << r << endl;
	
	return 0;
}