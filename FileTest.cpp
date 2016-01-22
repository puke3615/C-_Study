#include<iostream.h>
#include<fstream.h>

using namespace std;

int main() {
	
	const char *PATH = "E:/test/1.txt";
	
	//写文件 
	ofstream out;
	out.open(PATH);
	cout << "Writing to file" << endl;
	cout << "Enter your name:";
	//输入名字 
	char data[100];
	cin >> data;
	out << data << endl;
	//输入年龄
	cout << "Enter your age:";
	cin >> data;
	out << data << endl;
	
	out.close();
	
	
	
	//读文件 
	cout << endl;
	ifstream in;
	cout << "Read File" << endl;
	in.open(PATH); 
	in >> data;
	cout << data << endl;
	in >> data;
	cout << data << endl;
	
	in.close();
	
	
	return 0;
}
