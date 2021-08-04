#include<stdio.h>
#include<math.h>

int main(void) {
	
	int x;
	int num, bits, tens, hundreds;
	printf("请输入一个3位整数：");
	scanf("%d", &x);
	x = fabs(x);
	hundreds = x / 100;
	tens = x / 10 % 10;
	bits = x % 10;
	num = bits * 100 + tens * 10 + hundreds;
	printf("逆序输出的结果是：%d\n", num);
	return 0;
}
