#include<stdio.h>

int main(void)
{
	FILE *fp;
	
	fp=fopen("test1.txt","w");
	
	if(fp==NULL){
		printf("file isn't open\n");
		return 1;
	}
	
	else{
		printf("file is open\n");
	}
	
	fclose(fp);
	printf("file is close\n");
	
	return 0;
	
}