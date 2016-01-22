#include<iostream.h>

using namespace std;

int main() {
	
	char a[10] = "wuzijiao";
	char b[10] = "zi";
	char copy[10];
	
	//将后者字符串copy到前者 
	strcpy(copy, a);
	cout << "strcpy(copy, \"wuzijiao\"): copy = " << b << endl;
	
	//将后者字符串拼接到前者的尾部 
	strcat(a, b);
	cout << a << endl;
	
	//返回字符串的长度 
	int length = strlen(a);
	cout << length << endl;
	
	string name1 = "mmm";
	string name2 = "nnn";
	cout << name1 << endl;
	//字符串拼接和Java相似 
	cout << name1 + name2 << endl;
	
	
	
	return 0;
}
