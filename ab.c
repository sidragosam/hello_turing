#include <stdio.h>

int main()
{
	int a = 5;
	int b = 2;
	printf("A: %d, B: %d\n",a,b);
	a = a - b;
	b = b + a;
	a = b - a;
	printf("A: %d, B: %d\n",a,b);
	a ^= b;
	b ^= a;
	a ^= b;
	printf("A: %d, B: %d\n",a,b);
	a = a*b;
	b = a/b;
	a = a/b;
	printf("A: %d, B: %d\n",a,b);
}
