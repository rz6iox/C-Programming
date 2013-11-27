#include<time.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX_STAGE 3
#define LEVEL_MIN 2
#define LEVEL_MAX 6

int sleep(unsigned long x)
{
	clock_t c1 = clock(),c2;
	do{
		if((c2=clock())==(clock_t)-1)
		return(0);
		
	}while(1000.0*(c2-c1)/CLOCKS_PER_SEC < x);
	
	return(1);
}

int main(void)
{
	int i,stage,level,success,score[MAX_STAGE];
	clock_t start,end;

	srand(time(NULL));

	printf("プラスワントレーニング開始\n二桁の数値を記憶します\n1を加えた数字を入力せよ。\n");

	do{
		printf("挑戦するレベル(%d-%d)\n",LEVEL_MIN,LEVEL_MAX);
		scanf("%d",&level);
	}while(level<LEVEL_MIN || level>LEVEL_MAX);

	success=0;
	start=clock();
	for (stage = 0; stage < MAX_STAGE; stage++){
		int no[LEVEL_MAX];
		int x[LEVEL_MAX];
		int seikai = 0;

		printf("第%dステージ開始！！\n",stage+1);
		for (i = 0; i < level; i++)
		{
			no[i]= rand()%90+10;
			printf("%d  ",no[i]);
		}

		fflush(stdout);
		sleep(600*level);
		printf("\r%*s\r",3*level,"");

		for (i = 0; i < level; i++)
		{
			printf("%d番目の数:\n",i+1);
			scanf("%d",&x[i]);
		}

		for (i = 0; i < level; i++)
		{
			if (x[i]!=no[i]+1)
				printf("☓　");
			else{
				printf("◯　");
				seikai++;
			}
		}

		putchar('\n');

		for (i = 0; i < level; ++i)
			printf("%2d ",no[i] );
		printf("・・・・%d個、正解です。\n",seikai);
		score[stage]=seikai;
		success+=seikai;
	}

	end=clock();

	printf("%d個中、%d個正解しました。\n",level*MAX_STAGE,success);

	printf("\n□■成績■□\n");
	printf("----------------------------------------------------\n");
	for (i = level; stage < MAX_STAGE; stage++)
		for (stage = 0; stage < MAX_STAGE; stage++)
			if (score[stage]>=i)
				printf("　★　" );
			else
				printf("     ");
		putchar('\n');
	printf("----------------------------------------------------\n");
	printf("%0.1fでした。\n",(double)(end-start)/CLOCKS_PER_SEC);
	
	return (0);
}