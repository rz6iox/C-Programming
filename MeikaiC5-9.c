#include<stdio.h>

#define MAX 10
int int main(void)
{
	int i,a[MAX],cnt=0,retry;
	printf("整数を入力してください\n");
	do{
		if (i=0;i<MAX-1;i++)
			for (int i = 0; i < count; ++i)
				a[i]=a[i+1];
	

	printf("%d個目の整数:",cnt+1);
	scanf("%d"&a[cnt < MAX ? cnt : MAX-1]);
	cnt++:

	printf("続けますか？：(YES...1/NO...0):");
	scanf("%d",&rertry);
	}while(retry==1);

	if(cnt<=MAX)
		for(i=0;i<cnt;i++)
			printf("%2d個目: %d\n",i+1,a[i]);
	else
		for(i=0;i<cnt;i++)
			printf("%2d個目: %d\n",cnt-MAX+1,a[i] );
	return 0;
}