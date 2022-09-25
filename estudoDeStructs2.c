	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	typedef struct //Cria uma STRUCT para armazenar dados de uma pessoa
	{
		char Nome[200]; //Define o campo Nome
		float Peso; //Define o campo Peso
		int Idade; //define o campo Idade
		float Altura; //Define o campo Altura
	}Pessoa; // Redefine o nome do tipo criado . Pessoa será essa struct
	
	imprimir(a)
	{
		printf(a);
	}
	
	int main ()
	{
		setlocale(LC_ALL, "portuguese");
		
			Pessoa Joao, Chapolin , PicaPau;  //serão 3 structs de pessoas.
			Pessoa Povo[10]; //Cria uma array de 10 pessoas (10 structs)
			
			strcpy(Joao.Nome,"João");
			Joao.Idade=15;
			Joao.Peso=60.5;
			Joao.Altura=1.75;
			
			strcpy(Povo[4].Nome,"Chapolin");
			Povo[4].Idade=23;
			Povo[4].Peso=75.3;
			Povo[4].Altura=1.89;
			
			Chapolin = Povo[4];
			
			printf("Nome = %s\nIdade = %d\nPeso = %.2f\nAltura = %.2f\n",Chapolin.Nome,Chapolin.Idade,Chapolin.Peso,Chapolin.Altura);
			
			system("pause");
			return 0;
			
	}
