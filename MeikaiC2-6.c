#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b,c;
	int x;
	clock_t start,end;
	double req_time;
	
	srand(time(NULL));
	
	a = rand()%10;
	b = rand()%10;
	c = rand()%10;
	
	printf("%d+%d+%dはいくつですか？",a,b,c);
	
	start = clock();
	
	while(1){
		scanf("%d",&x);
		if(x == a+b+c)
		break;
		printf("\a違います。\n再度入力してください:");
	}
	
	end = clock();
	
	req_time = (double)(end-start)/CLOCKS_PER_SEC;
	
	printf("%f掛かりました。\n",req_time);
	
	return(0);
}