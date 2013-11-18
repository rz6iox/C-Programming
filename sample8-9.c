#include <stdio.h>
#define MAX(x,y) (x>y?x:y)
int main(void)
{
	int num1,num2,ans;
	
	printf("一台目はいくらの車を買いますか？\n");
	scanf("%d",&num1);
	
	printf("二台目はいくらの車を買いますか？\n");
	scanf("%d",&num2);
	
	ans=MAX(num1,num2);
	printf("最大は%d万円です\n",ans);
	
	return 0;
}