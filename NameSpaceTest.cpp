#include<iostream.h>

using namespace std;

namespace space1 {
	string str = "str1";
	void play(string str) {
		cout << "space1 --> " << str << endl;
	}
	
	namespace common {
	
	void execute() {
		cout << str << endl;
	}
}
	
}

namespace space2 {
	string str = "str2";
	void play(string str) {
		cout << "space2 --> " << str << endl;
	}
}


int main() {
	
	space1::play(space1::str);
	space2::play(space2::str);
	
	space1::play(space2::str);
	space2::play(space1::str);
	
	/**
	using namespace space1; --> ʹ��ָ�������ռ�
	using space1::play; --> ʹ��ָ���������ռ��ָ������
	using space2::str; --> ʹ��ָ���������ռ��ִ�г�Ա���� 
	
	**/ 
	//using namespace space1;
	
	using space1::play;
	using space2::str;
	
	play(str);
	
	
	space1::common::execute();
	
	return 0;
}
