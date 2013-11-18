#include <stdio.h>

main (void){
	int res,i;
	
	printf(" 何番目の処理を飛ばしますか？\n");
	scanf("%d",&res);
	
	for(i=1;i<=10;i++){
		if(i==res)
			continue;
		printf("%dの処理で\n",i);
		}
	
	return 0;
}