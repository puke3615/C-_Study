#include<iostream.h>

using namespace std;

#define AREA(radius) (PI * radius)
#define PI 3.1415926535897932384626

#define STR(x) #x;
#define CONCAT(m, n) m ## n

int main() {
	
	/**
	double radius;
	while (true) {
		cout << "����뾶��";
		cin >> radius;
		if (radius == 88) {
			break;
		}
		cout << "���Ϊ: " << AREA(radius) << endl; 
		cout << endl;
	}
	cout << "�������" << endl;
	cout << endl;
	**/
	
	int cat = 45;
	
	cout << STR(121`3214);
	cout << endl;
	cout << CONCAT(ca, t) << endl;
	cout << endl;
	//cout << CONCAT(abc, 23) << endl;
	
	cout << "�к� -- LINE --> " << __LINE__ << endl;
	cout << "�ļ� -- FILE --> " << __FILE__ << endl;
	cout << "���� -- DATE --> " << __DATE__ << endl;
	cout << "�¼� -- TIME --> " << __TIME__ << endl;
	
	cout << endl; 
	
	return 0;
}
 