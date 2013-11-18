#include <stdio.h>

main (void){

	int test[5];
	int i;
		
	test[0] = 80;
	test[1] = 90;
	test[2] = 60;
	test[3] = 45;
	test[4] = 78;

	for(i=0;i<5;i++){
		printf("%d番目の人の点数%dです。\n",i+1,test[i]);
	}	
	
	return 0;
}