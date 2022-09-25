#include <stdio.h>

int x = 10,y = 20;
int *ponteiro=&x;

y=*ponteiro;

printf("x = %i  y = %i\n",x,y);
