#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int no,ans;
	srand(time(NULL));
	ans = rand()%11;
	
	printf("0-10の範囲で数あてゲーム！！\n");
	
	do{
		printf("いくつかな？\n");
		scanf("%d",&no);
		
		if(no>ans)
			printf("\aおおきい\n");
		else if(no<ans)
			printf("\aちいいさい\n");
	
	}while(no!=ans);
	
	printf("正解\n");
	
	return 0;
}