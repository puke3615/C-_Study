#include<stdio.h>

void readFile(char *filePath) {
	FILE *file = fopen(filePath, "r");
 	if (file == NULL) {
		puts("文件打开失败"); 	
		exit(0);
 	} else {
	 	puts("文件打开成功"); 
 	} 

	
	int c;
	while ((c = fgetc(file)) != EOF) {
		putchar(c);
	}

	
	int close = fclose(file);
	if (close == 0) {
		puts("文件关闭成功");
	} else{
		puts("文件关闭失败");
	}
}

main() {
	
	char *fileName = "E:/git/StatHelper.java";
	readFile(fileName);
	
	
}

