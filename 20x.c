#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int  i,sc;
	printf("Insira um valor\n");
	scanf("%d",&sc);
	
	for(i=1;i<=20;i++)
	{
		printf("\n%d vezes %d\n",sc ,i);
	}
	return 0;
}
