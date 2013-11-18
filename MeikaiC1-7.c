#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int no,ans;
	int max_stage = 10;
	int remain = max_stage;
	
	srand(time(NULL));
	ans = rand()%10;
			
			printf("0-999の数字をあててください。\n");
	do{
		printf("残り%dです。\n",remain);
		scanf("%d",&no);
		remain--;
		
		if(no>ans){
			printf("もっと小さいよ。\n");
		}
		else if(no<ans){
				printf("もっと大きいよ\n");
		}
	
	}while(no!=ans && remain>0);
	
	if(no!=ans)
		printf("\a正解は%dです。\n",ans);
	else{
		printf("正解。\n");
		printf("%d回目であたりました。\n",max_stage - remain);
	}	
	return(0);	
}