#include <stdio.h>
#include <unistd.h>

int main()
{
	int i = 1;
	while(i)
	{
		printf("%d",i);
		sleep(i);
		i++;
	}
}
