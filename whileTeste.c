#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int num;
	
	printf("--------------------------------------------\n");
	printf("\nDigite um n�mero:\n");
	scanf("%d",&num);
	
	while(num!=0)
	{
		printf("\nO n�mero digitado � %d\n",num);
		printf("\n_________________________________________\n\n");
		printf("\nDigite um n�mero:\n");	
		scanf("%d",&num);
	}
	
	printf("Volte Sempre!");
	printf("\n\n............................................\n\n");
	return 0;
}
