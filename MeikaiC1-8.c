#include<time.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX_STAGE 10

int main(void)
{
	int i,stage,no,ans;
	int num[MAX_STAGE];
	
	srand(time(NULL));
	ans = rand()%10;
			
	printf("0-999の数字をあててください。\n");
	stage=0;
	
	do{
		printf("残り%dです。\n",MAX_STAGE-stage);
		scanf("%d",&no);
		num[stage++]=no;
		
		if(no>ans){
			printf("もっと小さいよ。\n");
		}
		else if(no<ans){
				printf("もっと大きいよ\n");
		}
	
	}while(no!=ans && stage<MAX_STAGE);
	
	if(no!=ans)
		printf("\a正解は%dです。\n",ans);
	else{
		printf("正解。\n");
		printf("%d回目であたりました。\n",stage);
	}	
	
	puts("\n---履歴---");
	for(i=0;i<stage;i++)
		printf("%2d:%4d:%+4d\n",i+1,num[i],num[i]-ans);
	
	return(0);	
}