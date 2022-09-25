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
	
	//typedef -> dá um apelido para um tipo de dado.
    // typedef float nota (o "float" passa a se chamar "nota").
    //typedef é mais usado com structs porque ele resume uma declaração.
	//os structs vem antes da função main
	
	pessoa.codigo = 1;
	strcpy(pessoa.nome, "AB");
	
	
	printf("CÓDIGO = %d\nNOME =  %s \n",pessoa.codigo,pessoa.nome );
	system("pause");
	return 0;
	
}
