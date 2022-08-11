#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

//Cores como system

int main() {

    char comando[9]="color "; //-----color cor-hexadecimal  exemplo: "color #FFFFF"
    char cores[2];

    setlocale(LC_ALL,"Portuguese");

    SetConsoleTitle("Usando Cores BB!!!") ;

    printf("\t0 - Pretot8 - Cinza\n");
    printf("\t1 - Azul\t9 -Azul Claro\n");
    printf("\t2 - Verde\tA - Verde Claro\n");
    printf("\t3 - Verde Água\tB Verde Água Claro\n");
    printf("\t4 - Vermelho\tC - Vermelho Claro\n");
    printf("\t5 - Roxo\tD -Lilás \n");
    printf("\t6 - Amarelo\tE - Amarelo Claro\n");
    printf("\t7 - Branco\tF - Branco Brilhante\n");


    printf("\nCor de Fundo: ");
    scanf("%c",&cores[0]);
    getchar();  //remove o Enter (buffer?)

    printf("Cor do texto: ");
    scanf("%c",&cores[1]);

    strcat(comando,cores); //Strcat----> Concatena as variáveis

    system(comando);

    system("pause");

}

