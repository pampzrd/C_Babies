#include <stdio.h>
#include <locale.h>

//Fazer dois desenhos na tela com fun��es dependendo da escolha do usu�rio.
int ursinho() {
    printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
    printf("&&&&&&&( *** )&&&&&&&&&&&( *** )&&&&&&&\n");
    printf("&&&&&( * (L7)  )*******(  (L7) * )&&&&&\n");
    printf("&&&&&&&&( **   ��      ��  ** )&&&&&&&&\n");
    printf("&&&&&&&( *  (8)        (8)   * )&&&&&&&\n");
    printf("&&&&&&( *        ( P )        * )&&&&&&\n");
    printf("&&&&&&&&&( *       u       * )&&&&&&&&&\n");
    printf("&&&&&&&&&&&&&_____________&&&&&&&&&&&&&\n");
    printf("&&&&&&&&&&&&&( ****8**** )&&&&&&&&&&&&&\n");
    printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");

}

int pacman(){
    printf("#######################################\n");
    printf("#################(         )###########\n");
    printf("##############(                )#######\n");
    printf("############(      ()             )####\n");
    printf("###########(               )###########\n");
    printf("###########(          )################\n");
    printf("###########(             )#############\n");
    printf("############(                   )######\n");
    printf("###############(             )#########\n");
    printf("#######################################\n");
}

int coracao(){
    printf("################################\n");
    printf("#####(       )####(       )#####\n");
    printf("####(         )##(         )####\n");
    printf("####(                      )####\n");
    printf("######(                  )######\n");
    printf("#######(               )########\n");
    printf("##########(         )###########\n");
    printf("############(     )#############\n");
    printf("##############( )###############\n");
    printf("################################\n");

}
//Qual seu sal�rio por hora?
//Quanto receber� no m�s?
int salarioMensal(){
    float salarioHora;
    int horas;
    float salarioMes;
    printf("Informe seu sal�rio por hora: \n");
    scanf("%f",&salarioHora);
    printf("Informe quantas horas aproximadas voc� trabalha por dia: \n");
    scanf("%f",&horas);
    horas *=5; //semanal
    salarioMes = salarioHora * horas;
    printf("\n Voc� receber� aproximadamente %f por m�s.\n",salarioMes);

}

int escolha(){
    int opcao;
    scanf("%d",&opcao);
    switch (opcao) {
        case 1 : ursinho();
            salarioMensal();
            break;
        case 2: coracao();
            salarioMensal();
            break;
        case 3: pacman();
            salarioMensal();
            break;
            case 4: break;

    }

}



int main() {
    setlocale(LC_ALL,"Portuguese-brazilian");
    printf("Descubra seu sal�rio mensal!\n");
    printf("Escolha uma das op��es: \n");
    printf("1.URSINHO   2.CORA��O   3.PACMAN   4.SAIR\n");
    escolha();

}

