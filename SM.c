#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main(){
int a,b,op;
setlocale(LC_ALL,"");
printf("Insira um número	\n");
scanf("%d",&a);

printf("Insira outro número	\n");
scanf("%d",&b);

printf("Você inseriu %d e %d \n",a,b);
op = a+b;

printf("A soma é %d",op);

return 0;
}

