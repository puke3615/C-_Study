#include<iostream.h>
using namespace std;

//�����ĺ������ã���д��main��������͹ң��� 
int testFunction(int m, int n) {
	return m + n;
}

int main() {
	
	int c = testFunction(4, 6);
	
	cout << c << endl;
	
	return 0;
} 

