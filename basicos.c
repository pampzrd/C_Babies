#include <stdio.h>

int main(void){
int g;
printf("Se você é \n");
for(g = 0; g < 3; g++)
{
    printf("jovem ainda\n");
}

int i; //declara o i pois le será usado no lugar da array
int array[4] = {0,2,4,6};

//imprime todos os 4 valores da array
for(i = 0; i < 4; i++) {
printf("%d, ",array[i]);
}

//imprime 1 valor da array  / esse (i < num) tbm determina quantas vezes os valores vão aparecer no console 
 for(i = 0; i < 1; i++) {
printf("%d, ",array[i]);
}

//imprime o 3° index da array  4x
for(i = 0; i < 4; i++) {
printf("%d, ",array[3]);
}





}