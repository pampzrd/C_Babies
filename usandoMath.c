#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//usando potencia��o

int main (){
	setlocale(LC_ALL,"Portuguese");
double base=2;
double exp=3;
double res;
double div;
double a=5;
double b=2;
int c,d;

//Para investigar> Como double a e b n�o altera as vari�veis com scanf// Altera se A e B s�o float

printf("Digite o valor de A: \n");
scanf(" %f",&a);

printf("Digite o valor de B: \n");
scanf(" %f",&b);

res= pow(base,exp);

printf("Potencia��o de 2^3 --> %.1f\n",res);

div = a/b;
c =ceil(div);
d =floor(div);

printf("Divis�o --> %.1f\n",div);


printf("Ceil do resultado da divis�o --> %d\n",c);
printf("Floor do resultado da divis�o --> %d",d);

}
