#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main(){
int a,b,op;
setlocale(LC_ALL,"");
printf("Insira um n�mero	\n");
scanf("%d",&a);

printf("Insira outro n�mero	\n");
scanf("%d",&b);

printf("Voc� inseriu %d e %d \n",a,b);
op = a+b;

printf("A soma � %d",op);

return 0;
}

