#include<iostream.h>
using namespace std;

//基本的函数调用（？写在main函数后面就挂？） 
int testFunction(int m, int n) {
	return m + n;
}

int main() {
	
	int c = testFunction(4, 6);
	
	cout << c << endl;
	
	return 0;
} 

