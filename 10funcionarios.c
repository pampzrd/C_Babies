#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale("LC_ALL"," ");
	//Receber o salário de 10 funcionários, ver o maior salário e exibir a média salarial da empresa.
	float salario,media,maior,sc;
	int cont,i;
	maior=0;
	cont=0;
	
	for(i=1;i<=10;i++)
	{
		printf("\nInsira seu salário aqui:_\n");
		scanf("%f",&sc);
		if(sc>maior){
			maior=sc;
		}
		printf("\n %0.2f x%d",sc,i);
		salario+=sc;
	}
	media=salario/10;
	printf("\n O maior salário é  = %0.2f",maior);
	printf("\n A média salarial da empresa é  = %0.2f",media);
	
	
}
