#include <stdio.h>

main (void){
	int num;
	num = 3;
	printf("Variable(num) is %d.\n",num);
	num = 5;
	printf("Variable(num) is CHANGED.\n",);
	printf("New Variable(num) is %d.\n",num);
	return 0;
}