#include <stdio.h>

main (void){

	int test[5];
	int i,j;
	
	printf("メンバの点数入力\n");
	for(i=0;i<5;i++){
		scanf("%d",&test[i]);
	}
	
	for(j=0;j<5;j++){
		printf("%d番目の人の点数%dです。\n",j+1,test[j]);
	}	
	
	return 0;
}