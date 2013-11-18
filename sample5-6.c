#include <stdio.h>

int main (void)

{
	int num,sum;
	int i;
	
	sum=0;
	num=0;
	
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		sum+=i;
	}
	
	printf("1から%dまでの");
	return 0 ;

}