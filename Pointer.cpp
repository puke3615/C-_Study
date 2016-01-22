#include<iostream.h>

using namespace std;

void setPointer(int *p) {
	//取出int值所对应的内容，然后进行赋值（感觉像是Java的反射） 
	*p = 100;
}

int* getPointer() {
	int a = 188;
	return &a;
}

int main() {
	
	int a = 2;
	char b[2];
	
	cout << "a的指针为" << &a << endl;
	
	cout << "b的指针为" << &b << endl;
	
	int *nullPointer = NULL;
	cout << "空指针 = " << nullPointer << endl;
	string str = nullPointer ? "有值" : "无值";
	cout << str << endl;
	
	char *name = "wuzijiao";
	int size = strlen(name);
	cout << size << endl;
	for (int i = 0; i < size; i ++) {
		char c = *(name + i);
		cout << c;
	}
	cout << endl;
	
	char *init = name;
	while (name <= init + size - 1) {
		cout << *name;
		name ++;
	}
	cout << endl;
	
	int m;
	//将m的指针传入函数 
	setPointer(&m);
	cout << "m = " << m << endl;
	
	cout << endl;
	
	int *n = getPointer();
	int value = *n;
	cout << "n = " << value;
	
	cout << endl;
	return 0;
}
