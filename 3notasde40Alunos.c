#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "");
	//ler 3 notas de 40 alunos
	//calcular a média aritmética e aprovação de cada
	//média >=7 aprova.
	int i;
	float media,sc,sc2,sc3,a,b,c;
	char resultado[60];
	
	//Erro 1: O setlocale não tem "" no LC_ALL.
	for(i=1;i<=40;i++)
	{
		printf("\n=======================");
		printf("\n\n	Aluno %d\n\n",i);
		printf("=======================\n");
		printf("Insira a nota 1:\n");
		scanf("%f",&sc);
		
		printf("Insira a nota 2:\n");
		scanf("%f",&sc2);
		
		printf("Insira a nota 3:\n");
		scanf("%f",&sc3);
		
		//Erro 2: Quando a nota é digitada com ponto, ele termina o programa. Limpar o buffer do teclado.
		media  = ((sc+sc2+sc3)/3);
		
		if(media>=7)
		{
			//resultado[29]="Parabéns, você foi aprovado!"; ATRIBUIÇÃO ILEGAL EM C
			strcpy(resultado,"\n\nParabéns, você foi aprovado!\n");
		}else
		{
			strcpy(resultado,"\n\nLamento, você foi reprovado!\n");
		}
		printf("\n\nSua média é %.2f",media);
		printf("%s \n",resultado);
		
	
	}	
	
	
	return 0;
}
