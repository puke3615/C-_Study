#include<stdio.h>


void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

main() {
	int a = 2, b = 3, *max = &a, *min = &b, *temp;
	printf("������������\n");
	//scanf("%d%d", max, min);
	
	
	printf("swapǰ:a = %d, b = %d\n", a, b);
	swap(max, min);
	printf("swap��:a = %d, b = %d\n", a, b);
	
	int **y = &max;
	
	printf("max = %d, *y = %d\n", max, *y);
	
}


