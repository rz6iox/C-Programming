#include <stdio.h>

main (void){
	int num1=2;
	int num2=3;
	int sum = num1 + num2;
	
	printf("num1=%d\n",num1);
	printf("num2=%d\n",num2);
	printf("sum=%d\n",sum);
	
	num1=num1+1;
	
	printf("num1+1=%d\n",num1);
	
	return 0;
	
	}