#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Permite acentos (na verdade o idioma usado no sistema-Português)
    printf("Olá\n");


int a = 5;
float b = 1.6;
float c= a + b;
// "XX" Vai indicar uma linha de sintaxe que deu errado
//XX printf("a = 5\n","b = 1.6\n","O valor de c é =%f",c);
//ele leu apenas a 1 string no codigo acima
    printf("a = 5\nb = 1.6\na + b = c\nO valor de c é =%f",c);


};