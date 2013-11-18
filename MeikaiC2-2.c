#include<time.h>
#include<stdio.h>

int sleep(unsigned long x)
{
	clock_t c1 = clock(),c2;
	
	do{
		if((c2=clock()) == (clock_t)-1)
		return(0);
	}while(1000.0*(c2-c1)/CLOCKS_PER_SEC < x);
	return(1);
}

int main(void)
{
				
		int i;
		printf("毎週授業をやるというのも久しぶりで、しかも教えたことがないことを教えたことがない方法で教えるというのもいろいろと準備が必要で思ったより大変だった。 　文科系の学部でプログラミングを教える。　しかも、ただ教えるのではなく、教養と歴史背景を理解...");
		for(i=0;i<10000;i++){
			sleep(10);
			printf("\b \b");
			fflush(stdout);
		}
	return(0);
}