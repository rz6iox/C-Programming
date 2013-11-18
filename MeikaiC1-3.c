#include<stdio.h>

int main(void)
{
	int no;
	int ans = 7;
	
	printf("0-9の数字を当てる\n");
	
	
	
	while(1){
		printf("いくつだろう？\n");
		scanf("%d",&no);
		
		if(no>ans)
			printf("\aおおきい\n");
		else if(no<ans)
			printf("\aちいいさい\n");
		else
			break;
	}
	
	printf("正解\n");
	
	return 0;
}