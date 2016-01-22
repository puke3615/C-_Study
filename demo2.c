#include<stdio.h>


void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

main() {
	int a = 2, b = 3, *max = &a, *min = &b, *temp;
	printf("输入两个数：\n");
	//scanf("%d%d", max, min);
	
	
	printf("swap前:a = %d, b = %d\n", a, b);
	swap(max, min);
	printf("swap后:a = %d, b = %d\n", a, b);
	
	int **y = &max;
	
	printf("max = %d, *y = %d\n", max, *y);
	
}


