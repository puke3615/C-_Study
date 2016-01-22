#include<iostream.h>

using namespace std;

class Cat {
	
	string name;
	

	public:
		int age;
		string sex;
		static int index;//��̬���� 
		
		
		//���캯�� 
		Cat();//���캯�� 
		Cat(int age);//�������Ĺ��캯�� 
		Cat(int a, string s, string n);//ʹ�ó�ʼ���б�����ʼ���ֶ� 
		
		//Cat(const Cat &cat);
		
		//��������
		~Cat(); 
		
		//��Ԫ����
		friend void changeName(Cat *cat, string name); 
		
		//��ͨ���� 
		void setName(string n);
		//�˴�����д�ɡ�string getName(void)�������ɴ���void 
		string getName();
		
		//��̬����
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
	cout << "��̬����index = " << index << endl; 
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
	p->setName("ָ��ı�");
}

int Cat::index = 0;

int main() {
	
	Cat cat(100, "����Ī��", "������è");	
	//Cat cat1 = cat;
	print(cat);
	
	changeName(&cat, "123");
	print(cat);
	
	cat.sex = "��";
	cat.setName("������");
	print(cat);
	
	operation(&cat);
	print(cat);
	
	Cat::increment(10);
	
	return 0;
	
}
