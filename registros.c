#include <stdio.h>
#include <stdlib.h>

//Usando Registros (Estrutura de Dados)
//Registros (record) � um pacote de vari�veis
//Cada vari�vel � um campo (field) do registro
//Em C Registros s�o conhecidos como structs (abreviatura de structure).

//Exemplo de defini��o de struct: 

	struct Aluno
	{
		char nome [80]; //permite nomes inteiros (e com espa�os)
		float nota;
	};
	
	int main()
	{
		//declara��o de duas vari�veis do tipo Aluno
		struct Aluno a,b;
		
		//leitura dos dados que ser�o armazenados em a:
		printf("Digite o nome: ");
		scanf("%[^\n]",a.nome);
		printf("Digite a nota: ");
		scanf(" %f",&a.nota);
		fflush(stdin); //uma forma de limpar o buffer
		
		//armazena os dados do Aluno b:
		printf("Digite o nome: ");
		gets(b.nome);
		printf("Digite a nota: ");
		scanf("%f",&b.nota);
		getchar(); //limpa o buffer tbm.
		
		//Impress�o dos dados 
		printf("Aluno 1 = %s , Nota = %.2f \n", a.nome,a.nota);
		printf("Aluno 2 = %s , Nota = %.2f \n",b.nome,b.nota);
		
		return 0;
	}

	
