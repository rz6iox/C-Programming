#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int retry;
	srand(time(NULL));
	
	printf("この処理系では0-%dの乱数が生成されます\n",RAND_MAX);
	
	do{
		printf("%d\n",rand());
		
		printf("Retry?... (0)No (1)Yes:\n");
		scanf("%d",&retry);
	}while(retry==1);
	
	return 0;
}