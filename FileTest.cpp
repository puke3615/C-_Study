#include<iostream.h>
#include<fstream.h>

using namespace std;

int main() {
	
	const char *PATH = "E:/test/1.txt";
	
	//д�ļ� 
	ofstream out;
	out.open(PATH);
	cout << "Writing to file" << endl;
	cout << "Enter your name:";
	//�������� 
	char data[100];
	cin >> data;
	out << data << endl;
	//��������
	cout << "Enter your age:";
	cin >> data;
	out << data << endl;
	
	out.close();
	
	
	
	//���ļ� 
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
