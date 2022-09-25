#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX_LENGTH 100
#define NUM_STRINGS 5

	struct Personagem{
		char nome [80];
		int idade;
		int level[5];
		char poder[5];
	};

int main()
{
	setlocale(LC_ALL,"Brazilian-Portuguese");
	/*  TAVA TESTANDO COMO FUNCIONA A ARRAY  
	char poder [NUM_STRINGS][MAX_LENGTH]={"Fogo","Ar","Água","Terra"};
	
	printf(" %s",poder[3]);
	*/
	struct Personagem a,b,c,d,e;
	char poder [NUM_STRINGS][MAX_LENGTH]={"Fogo","Ar","Água","Terra"};
	int level[5]={1,2,3,4,5};
	
	
	a.idade=20;
	a.level[3];
	a.poder[3];
	

	
	printf(" %d anos \n Level %d \n Tipo de poder %s \n",a.idade,a.level,a.poder);
//	printf("Digite o nome do B: ");
//	scanf(" %s",b.nome);
//	printf("O nome de B é %s",b.nome);
	
	
	
	
	
}
