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
	using namespace space1; --> 使用指定命名空间
	using space1::play; --> 使用指定的命名空间的指定函数
	using space2::str; --> 使用指定的命名空间的执行成员变量 
	
	**/ 
	//using namespace space1;
	
	using space1::play;
	using space2::str;
	
	play(str);
	
	
	space1::common::execute();
	
	return 0;
}
