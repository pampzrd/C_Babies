#include <stdio.h>
#include <locale.h> //Linguagem do pc com acentos
//qual a diferen�a de usar void main ou int main (void)
void main (){
	
	char ch1,ch2;
	setlocale(LC_ALL,"");
	printf("Digite duas letras:\n");
	
	ch1 =getc(stdin); //funciona como o scanf
	
	
	//precisa limpar o buffer do teclado para ele n�o contar ENTER como a segunda letra
	//Ou coloca " %c" um espa�o antes do identificador no Scanf
	//fflush(stdin);
	//no linux � _fpurge()
	
	scanf(" %c",&ch2);
	printf("As letras inseridas s�o %c e %c.\n",ch1,ch2);



}
