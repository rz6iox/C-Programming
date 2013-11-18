#include <stdio.h>

int main (void)

{
	int res;

	scanf("%d",&res);

	switch(res){
		case 1:
			printf("You input 1.\n");
			printf("END this prisess.\n");
			break;
	
		case 2:
			printf("You input 2.\n");
			printf("END this prisess.\n");
			break;
	
		case 3:
			printf("You input 3.\n");
			printf("END this prisess.\n");
			break;
	
		case 4:
			printf("You input 4.\n");
			printf("END this prisess.\n");
			break;
	
		default:
			printf("Input 1-4.\n");
			break;
	}	
	return 0 ;

}