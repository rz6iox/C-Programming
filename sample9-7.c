#include <stdio.h>

/*main関数の宣言*/
int main(void)
{
	int test[5] = {80,60,55,22,75};
	
	printf("test[0]の値は%dです\n",test[0]);
	printf("test[0]の値は%dです\n",&test[0]);
	printf("test[1]の値は%dです\n",test[1]);
	printf("test[1]の値は%dです\n",&test[1]);
	
	return 0;
}