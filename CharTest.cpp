#include<iostream.h>

using namespace std;

int main() {
	
	char a[10] = "wuzijiao";
	char b[10] = "zi";
	char copy[10];
	
	//�������ַ���copy��ǰ�� 
	strcpy(copy, a);
	cout << "strcpy(copy, \"wuzijiao\"): copy = " << b << endl;
	
	//�������ַ���ƴ�ӵ�ǰ�ߵ�β�� 
	strcat(a, b);
	cout << a << endl;
	
	//�����ַ����ĳ��� 
	int length = strlen(a);
	cout << length << endl;
	
	string name1 = "mmm";
	string name2 = "nnn";
	cout << name1 << endl;
	//�ַ���ƴ�Ӻ�Java���� 
	cout << name1 + name2 << endl;
	
	
	
	return 0;
}
