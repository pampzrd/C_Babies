
#include <stdio.h>
#include <stdlib.h>

int main(){

int i;
char Entrada[100]; 

printf("Escreva alguma coisa\n");
scanf(" %s",&Entrada);
	for(i=0;i<21;i++)
	{
		printf("%d  %s\n",i,Entrada);
	}
system("pause");

}
