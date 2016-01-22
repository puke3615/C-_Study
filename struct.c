#include<stdio.h>

struct Dog {
	
	char *name;
	int age;
	char sex;
	
};

main() {
	
	struct Dog dog;
	dog.name = "°¢´ï";
	dog.age = 3;
	dog.sex = 'ÐÛ';
	
	printf("dog = %d\n", dog.age);
	
}