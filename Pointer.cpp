#include<iostream.h>

using namespace std;

void setPointer(int *p) {
	//ȡ��intֵ����Ӧ�����ݣ�Ȼ����и�ֵ���о�����Java�ķ��䣩 
	*p = 100;
}

int* getPointer() {
	int a = 188;
	return &a;
}

int main() {
	
	int a = 2;
	char b[2];
	
	cout << "a��ָ��Ϊ" << &a << endl;
	
	cout << "b��ָ��Ϊ" << &b << endl;
	
	int *nullPointer = NULL;
	cout << "��ָ�� = " << nullPointer << endl;
	string str = nullPointer ? "��ֵ" : "��ֵ";
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
	//��m��ָ�봫�뺯�� 
	setPointer(&m);
	cout << "m = " << m << endl;
	
	cout << endl;
	
	int *n = getPointer();
	int value = *n;
	cout << "n = " << value;
	
	cout << endl;
	return 0;
}
