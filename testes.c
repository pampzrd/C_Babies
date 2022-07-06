#include <stdio.h>

int main ()
{
	const int a = 50;
	#define b 60
	printf("%d %d",a, b);
	return 0;
}
