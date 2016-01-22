#include<iostream>
using namespace std;

//exrern ¹Ø¼ü×Ö£¬ 
extern int a, b;
extern int c;
extern float e;

int main() {

	int a = 10;
	int b = 20;
	int c = a + b;
	
	cout << c << endl;
	
	float e = 1.0 / 3;
	
	cout << e << endl;
	
	return 0;
}