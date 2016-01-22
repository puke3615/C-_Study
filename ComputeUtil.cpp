#include<iostream.h>

using namespace std;

int main() {
	
	const int COUNT = 10;
		
	while (true) {
		int value;
		int sum = 0;
		cout << "Input" << endl;
		for (int i = 0; i < COUNT; i ++) {
			cin >> value;
			if (value == 88) {
				break;
			}
			sum += value;
		}
		int a = sum / COUNT;
		cout << "Æ½¾ù --> " << a <<endl;
		cout << endl;
	}
	
	
	
	return 0;
}
