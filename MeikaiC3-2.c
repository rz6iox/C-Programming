#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int human,comp,judge,retry;
	
	srand(time(NULL));
	printf("じゃんけんゲーム開始!!!!!!\n");
	
	do{
		comp=rand()%3;
		
		do{
			printf("\n\aじゃんけんぽん...(0)グー(1)チョキ(2)パー:");
			scanf("%d",&human);
		}while(human<0 || human>2);
		
		printf("私は");
		
		switch(comp){
		  case 0:printf("グー");	break;
		  case 1:printf("チョキ");	break;
		  case 2:printf("パー");	break;
		}
		printf("で、あなたは\n");
		
		switch(human){
		  case 0:printf("グー");	break;
		  case 1:printf("チョキ");	break;
		  case 2:printf("パー");	break;
		}
		judge = (human-comp+3)%3;
				
		switch(judge){
		  case 0:printf("引き分け");	break;
		  case 1:printf("負け");	break;
		  case 2:printf("勝ち");	break;
		}
		
		printf("RETRY?.....(0)NO (1)YES :");
		scanf("%d",&retry);
	}while(retry == 1);
	
	return(0);
}