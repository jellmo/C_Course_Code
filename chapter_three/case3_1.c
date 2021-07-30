//例3.1 计算并输出一个三位整数的个位、十位和百位数字之和

#include<stdio.h>
int main(void) {

	int num, bits, tens, hundreds;
	printf("input a three-digit integer: ");
	scanf("%d", &num);
	hundreds = num / 100;	//计算百位数 
	tens = num / 10 % 10;   //计算十位数
	bits = num % 10;		//计算个位数
	printf("hundreds = %d, tens = %d, bits = %d, their sum is %d.\n", hundreds, tens, bits, hundreds+tens+bits);
	return 0;
}
