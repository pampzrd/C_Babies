#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a,*b,c;
	//Para que serve o * antes da vari�vel?
	//
	a = 5;
	b = &a; //ele vai colocar o mesmo endere�o do valor a no valor b
	c = 10;
	scanf("%d", b);
	printf("%d %d\ %d\n", a, b, c);
}
