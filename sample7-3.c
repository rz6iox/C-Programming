#include <stdio.h>
#define NUM 5

main (void){

	int test[NUM]={78,89,45};
	int i;
	
	for(i=0;i<NUM;i++){
		printf("%d番目の人の点数%dです。\n",i+1,test[i]);
	}
	return 0;
}