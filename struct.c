#include<stdio.h>

struct Dog {
	
	char *name;
	int age;
	char sex;
	
};

main() {
	
	struct Dog dog;
	dog.name = "����";
	dog.age = 3;
	dog.sex = '��';
	
	printf("dog = %d\n", dog.age);
	
}