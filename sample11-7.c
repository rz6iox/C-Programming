#include <stdio.h>

/*構造体stsruct Car1の宣言*/
typedef struct car1{
	int num ;
	double gas;
	unsigned int tire :3;
	unsigned int roof :1;
	unsigned int color :4;
}Car1;

/*構造体stsruct Car2の宣言*/
typedef struct car2{
	int num ;
	double gas;
	unsigned int tire ;
	unsigned int roof ;
	unsigned int color ;
}Car2;

/*main関数の宣言*/
int main(void)
{
	
	printf("ビットフィールド使用　%lu byte\n",sizeof(Car1));
	printf("ビットフィールド未使用　%lu byte\n",sizeof(Car2));
	
	return 0;
}