#include<iostream.h>

using namespace std;

int main() {
	
	string name;
	const string endFlag = "88";
	
	while (true) {
		cout << "��������:" << endl;
	
		cin >> name;
	
		cout << endl;
		
		if (name == endFlag) {
			string exit;
			cout << "ȷ��Ҫ������(y/n)";
			cin >> exit;
			if (exit == "y") {
				break;	
			}
		}
	
		cout << "�������:" << endl << name << endl;
		
		cout << endl;
	}
	
	return 0;
}
