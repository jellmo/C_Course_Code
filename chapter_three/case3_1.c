//��3.1 ���㲢���һ����λ�����ĸ�λ��ʮλ�Ͱ�λ����֮��

#include<stdio.h>
int main(void) {

	int num, bits, tens, hundreds;
	printf("input a three-digit integer: ");
	scanf("%d", &num);
	hundreds = num / 100;	//�����λ�� 
	tens = num / 10 % 10;   //����ʮλ��
	bits = num % 10;		//�����λ��
	printf("hundreds = %d, tens = %d, bits = %d, their sum is %d.\n", hundreds, tens, bits, hundreds+tens+bits);
	return 0;
}
