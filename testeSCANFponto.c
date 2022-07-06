#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
    float a,b,sc,sc1,sc2,c,d;
    printf("Digite uma nota:\n");
    scanf("%f",&sc);

    b=sc;
    
    printf("Digite uma nota:\n");
    scanf("%f",&sc1);
    
    a=sc1;
    printf("%f\n",a);
    printf("%f",b);
    printf("\nDigite uma nota:\n");
    scanf("%f",&sc2);
    c=sc2;
    d=((a+b+c)/3);
    printf("\n A média é %.2f .",d);
}
