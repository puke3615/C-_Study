#include<stdio.h>

#define A 10
#define Add (a * a)
#define X(x) (x + 1) * (x + 1)

main() {
	
	puts("123123");
	printf("A = %d\n", A);
	int a, b;
	do {
		printf("ÊäÈë²ÎÊý£º");
		scanf("%d%d", &a, &b);
		printf("a + ... + b = %d\n\n", plus(a, b));	
	} while (a != 88);

}

int plus(int from, int to) {
	if (from == to) {
		return from;
	}
	if (from > to) {
		int temp = to;
		to = from;
		from = temp;
	}
	
	int sub = 0;
	int i = 0;
	for (i = from; i <= to; i ++) {
		sub += i;
	}
	return sub;
} 
