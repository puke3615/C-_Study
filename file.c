#include<stdio.h>

void readFile(char *filePath) {
	FILE *file = fopen(filePath, "r");
 	if (file == NULL) {
		puts("�ļ���ʧ��"); 	
		exit(0);
 	} else {
	 	puts("�ļ��򿪳ɹ�"); 
 	} 

	
	int c;
	while ((c = fgetc(file)) != EOF) {
		putchar(c);
	}

	
	int close = fclose(file);
	if (close == 0) {
		puts("�ļ��رճɹ�");
	} else{
		puts("�ļ��ر�ʧ��");
	}
}

main() {
	
	char *fileName = "E:/git/StatHelper.java";
	readFile(fileName);
	
	
}

