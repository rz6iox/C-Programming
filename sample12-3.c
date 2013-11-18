#include<stdio.h>

int main(void)
{
	double num;
	
	printf("小数を入力してください\n");
	scanf("%lf",&num);
	
	printf("三桁出力%.3f\n",num);
	
	return 0;
	
	
	
}