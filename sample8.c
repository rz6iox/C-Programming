#include <stdio.h>

int a;

void func(void){

	int b=0;
	static int c = 0;

	printf("変数aは%d、変数bは%d、変数cは%d\n",a,b,c);
	
	a++;
	b++;
	c++;
}
int main (void){

	int i;
	
	for(i=0;i<5;i++){
		func();
		}
		
	return 0;
}