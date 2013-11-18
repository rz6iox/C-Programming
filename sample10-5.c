#include <stdio.h>

double avg(int t[]);

int main(void)
{
	int test[5];
	int i;
	double ans;
	
	printf("五人のテストを入力してください\n");
	
	for(i=0;i<5;i++){
			scanf("%d",&test[i]);
	}
	
	ans = avg(test);
	
	printf("五人のテストの平均点は%1fです\n",ans);
	
	return 0;
	
}