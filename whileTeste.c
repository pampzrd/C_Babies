#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int num;
	
	printf("--------------------------------------------\n");
	printf("\nDigite um número:\n");
	scanf("%d",&num);
	
	while(num!=0)
	{
		printf("\nO número digitado é %d\n",num);
		printf("\n_________________________________________\n\n");
		printf("\nDigite um número:\n");	
		scanf("%d",&num);
	}
	
	printf("Volte Sempre!");
	printf("\n\n............................................\n\n");
	return 0;
}
