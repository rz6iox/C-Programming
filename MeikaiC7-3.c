#include<time.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX_STAGE 10

int main(void){
	int i,j,x,no,stage;
	int dgt[9] = {1,2,3,4,5,6,7,8,9,};
	int a[8];
	double jikan;
	clock_t start,end;

	srand(time(NULL));

	printf("欠けている数字を入力してください。\n");

	start = clock_t();

	for(stage=0 ; stage<MAX_STAGE ; stage++){
		x = rand()%9;

		i=j=0;

		while(i<9){
			if(i != x)
				a[j++] = dgt[i];
			i++
		}

		for(i=0;i<8;i++)
			printf("%d ",a[i]);
		printf(":");

		do{
			scanf("%d",&no);
		}while(no != dgt[x]);

	}

	end = clock();
	jikan = (double)(end - start)/(CLOCK_PER_SEC);

	printf("%.1f秒掛かりました。\n",jikan );

	if(jikan > 25.0)
		printf("鈍すぎます\n");
	else if(jikan > 20.0)
		printf("少し鈍い\n");
	else if(jikan > 17.0)
		printf("まあまあ\n");
	else
		printf("素早い!!\n");

	 return(0);
}