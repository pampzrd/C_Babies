#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int i,sc,maior;
	maior=0;
	
	for(i=1;i<=15;i++)
	{
		printf("\nInsira 15 números: \n");
		scanf("%d",&sc);
		if(sc>maior)
		{
			maior=sc;
		}
		printf("Número %d - x%d\n",sc,i);
	}
	
	printf("\n O maior valor é %d",maior);
	return 0;
}
