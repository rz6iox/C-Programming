#include<time.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void make4digits(int x[])
{
	int i,j,val;
	
	for(i=0;i<4;i++){
		do{
			val =rand()%d;
			for(j=0;j<i;j++)
				if(val == x[j])
						break;
		}while(j<i);
		x[i]=val;
	}
}

int check(const char s[])
{
	int i,j,;
	
	if(strlen(s) != 4)
	return(1);
	
	for(i=0;i<4;i++){
		if(!isdigit(s[i]))
			return(2);
		for(i=0;i<4;i++)
			if(s[i]==s[j])
				return(3);
	}
	rturn(0);
}
	
void judge(const char s[],const int no[],int *hit,int *blow)
{
	int i,j;
	*hit=*blow=0;
	for(i=0;i<4;i++){
		for(j=0;i<4;j++){
			if(s[i]=='0'+no[j])
			if(i==j)
			(*hit)++;
			else
			(*blow)++;
		}
	}
}

void print_result(int snum,int spos)
{
	if(spos==4){
		printf("正解です\n");}
	elseif(snum==0)
		printf("それらの数字は全く含まれません\n");
	else{
		printf("それらの数字中、%d個が数字が含まれます\n",snum);
		
		if(spos==0)
			printf("但し、位置もあっている数字はありません\n");
		else
			printf("その中の%d個は、あっています\n",spos);
	}
	putchar('\n');
}

int miam(void)
{
	int try_no=0;
	int chk,hit,blow,no[4];
	char buff[4];
	clock_t start,end;
	
	srand(time(NULL));
	
	make4digits(no);
	
	start = clock();
	
	do{
		do{
			printf("入力してください\n");
			scanf("%d",buff);
			
			chk = check(buff);
			
			switch(chk){
			  case 1: puts("\a四文字で入力してください。");break;
			  case 2: puts("\a数字以外を入力しないでください");break;
			  case 3:　puts("\a同一の数字を複数入力しないでください");break;
			}
		}while(chk!=0);
		
		try_no++;
		judge(buff,no,&hit,&blow);
		print_result(hit+blow,hit);
	}while(hit<4);
	end=clock();
	
	printf("%d回かかりました。\n所要時間は%.1f秒でした。\n",try_no,(double)(end-start)/CLOCKS_PER_SEC);
	
	return(0);
}
	
	
	
	
	
	