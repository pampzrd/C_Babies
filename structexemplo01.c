#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct 
	{
		int codigo;
		char nome[200];
	}pessoa;

int main (){
	setlocale(LC_ALL,"portuguese");
	
	//typedef -> d� um apelido para um tipo de dado.
    // typedef float nota (o "float" passa a se chamar "nota").
    //typedef � mais usado com structs porque ele resume uma declara��o.
	//os structs vem antes da fun��o main
	
	pessoa.codigo = 1;
	strcpy(pessoa.nome, "AB");
	
	
	printf("C�DIGO = %d\nNOME =  %s \n",pessoa.codigo,pessoa.nome );
	system("pause");
	return 0;
	
}
