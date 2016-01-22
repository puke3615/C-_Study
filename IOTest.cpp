#include<iostream.h>

using namespace std;

int main() {
	
	string name;
	const string endFlag = "88";
	
	while (true) {
		cout << "输入名字:" << endl;
	
		cin >> name;
	
		cout << endl;
		
		if (name == endFlag) {
			string exit;
			cout << "确定要结束吗？(y/n)";
			cin >> exit;
			if (exit == "y") {
				break;	
			}
		}
	
		cout << "输入的是:" << endl << name << endl;
		
		cout << endl;
	}
	
	return 0;
}
