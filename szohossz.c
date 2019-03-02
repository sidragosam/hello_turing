#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0x01;
	do
		++a;
	while(b <<= 1);
	printf("Szóhossz: %d bit\n",a);
}
