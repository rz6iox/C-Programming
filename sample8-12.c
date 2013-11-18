#include <stdio.h>
int max(int x,int y);

/*main関数の宣言*/
int main(void)
{
	int num1,num2,ans;
	
	printf("一台目はいくらの車を買いますか？\n");
	scanf("%d",&num1);
	
	printf("二台目はいくらの車を買いますか？\n");
	scanf("%d",&num2);
	
	ans=max(num1,num2);
	printf("一番、高い車の値段は%d万円です\n",ans);
	
	return 0;
}

int max(int x,int y){

	if(x>y)
		return x;
	else
		return y;
	
}