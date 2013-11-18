#include<stdio.h>

int main(void)
{
	int i,x;
	
	printf("何段表示しますか?\n");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	printf("%*d\n",i,i%10);
	
	return(0);
}
	