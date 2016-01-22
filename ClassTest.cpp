#include<iostream.h>

using namespace std;

class Cat {
	
	string name;
	

	public:
		int age;
		string sex;
		static int index;//静态属性 
		
		
		//构造函数 
		Cat();//构造函数 
		Cat(int age);//带参数的构造函数 
		Cat(int a, string s, string n);//使用初始化列表来初始化字段 
		
		//Cat(const Cat &cat);
		
		//析构函数
		~Cat(); 
		
		//友元函数
		friend void changeName(Cat *cat, string name); 
		
		//普通函数 
		void setName(string n);
		//此处可以写成“string getName(void)”，即可带上void 
		string getName();
		
		//静态函数
		static void increment(int target);
		
};

Cat::Cat() {
	cout << "Cat is created .." <<endl; 
}

Cat::Cat(int a) {
	cout << "Cat is created .." << endl;
	age = a; 
}

Cat::Cat(int a, string s, string n):sex(s), age(a), name(n){
	cout << "Cat is created .." << endl;
}

/**
Cat::Cat(const Cat &c) {
	//cat.name = name;
	*c.age = age;
	c.sex = sex;
	cout << "Cat is allocating .." << endl;
}
**/

Cat::~Cat() {
	cout << "Cat is dead .." << endl;	
}

void Cat::setName(string name) {
	this->name = name;
}

string Cat::getName() {
	return name;
}

void Cat::increment(int index)  {
	Cat::index = index;
	cout << "静态属性index = " << index << endl; 
}

void print (Cat cat) {
	cout << "cat.sex = " << cat.sex << endl;	
	cout << "cat.age = " << cat.age<< endl;
	string name = cat.getName();
	cout << "cat.getName() = " << name << endl;
	cout << endl;
}

void changeName(Cat *cat, string newName) {
	cat->name = newName;
	//cat.name = newName;
}

void operation(Cat *p) {
	p->setName("指针改变");
}

int Cat::index = 0;

int main() {
	
	Cat cat(100, "雌雄莫辩", "功夫熊猫");	
	//Cat cat1 = cat;
	print(cat);
	
	changeName(&cat, "123");
	print(cat);
	
	cat.sex = "公";
	cat.setName("胡汉三");
	print(cat);
	
	operation(&cat);
	print(cat);
	
	Cat::increment(10);
	
	return 0;
	
}
