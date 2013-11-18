#include<stdio.h>

int main(void)
{
	int i,j,x;
	
	printf("何段、表示しますか?\n");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++){
		for(j=1;j<i;j++)
			putchar(' ');
		printf("%d\n",i%10);
	}
	
	return(0);
}