#include<stdio.h>
#include<math.h>

int main(void) {
	
	int x;
	int num, bits, tens, hundreds;
	printf("������һ��3λ������");
	scanf("%d", &x);
	x = fabs(x);
	hundreds = x / 100;
	tens = x / 10 % 10;
	bits = x % 10;
	num = bits * 100 + tens * 10 + hundreds;
	printf("��������Ľ���ǣ�%d\n", num);
	return 0;
}
