#include <stdio.h>

void buy(int x){
	printf("%d万円の車を買いました。\n",x);
}

int main(void)
{
	int num;
	
	printf("一台目はいくらの車を買いますか？\n");
	scanf("%d",&num);
	
	buy(num);
	
	printf("二台目はいくらの車を買いますか？\n");
	scanf("%d",&num);
	
	buy(num);
	
	return 0;
}