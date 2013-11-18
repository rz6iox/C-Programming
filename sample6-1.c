#include <stdio.h>
#include <unistd.h>

int main (void)

{
	int i;
	
	for (i=1;i<=100;i++){
	printf("Repeat %d times.\n",i);
	sleep(1);
	}
	
	printf("Finish repeat.\n");
	
	return 0 ;

}