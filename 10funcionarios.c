#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale("LC_ALL"," ");
	//Receber o sal�rio de 10 funcion�rios, ver o maior sal�rio e exibir a m�dia salarial da empresa.
	float salario,media,maior,sc;
	int cont,i;
	maior=0;
	cont=0;
	
	for(i=1;i<=10;i++)
	{
		printf("\nInsira seu sal�rio aqui:_\n");
		scanf("%f",&sc);
		if(sc>maior){
			maior=sc;
		}
		printf("\n %0.2f x%d",sc,i);
		salario+=sc;
	}
	media=salario/10;
	printf("\n O maior sal�rio �  = %0.2f",maior);
	printf("\n A m�dia salarial da empresa �  = %0.2f",media);
	
	
}
