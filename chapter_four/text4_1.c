#include<stdio.h>

int main(void){
//	char c1='a', c2='b', c3='c';
//	printf("a%cb%cc%c", c1, c2, c3);
//	int a=12, b=15;
//	printf("a=%d%%, b=%d%%\n", a, b);
//	int a, b;
//	scanf("%2d%*2s%2d", &a, &b);
	double a;
	scanf("%lf", &a);	 
	printf("%5.2f\n", a);	//数据宽度为5，小数点后保留两位
//	printf("%d, %d\n", a, b);
	return 0;
}
