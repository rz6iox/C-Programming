#include <stdio.h>

/*構造体stsruct Carの宣言*/
typedef struct car{
	int num ;
	double gas;
	
}Car;

/*show関数の宣言*/
void show(Car c);

int main(void)
{
	Car car1 ={0,0.0};
	scanf("%lf\n",&car1.num);
	scanf("%lf\n",&car1.gas);
	
	show(car1);
	
	return 0;
}

/*show関数の定義*/
void show(Car c){
	printf("%lf:%f\n",c.num,c.gas);
	
}