//ˮ�ɻ��� 
#include<stdio.h>

int main(void){
	
	int i, bits, tens, hundreds, sum;
	for (i=100; i<=999; i++){
		
		hundreds = i / 100;	//�����λ�� 
		tens = i / 10 % 10;   //����ʮλ��
		bits = i % 10;	//�����λ��
		sum = hundreds*hundreds*hundreds+tens*tens*tens+bits*bits*bits;
		if (i == sum){
			printf("%d��ˮ�ɻ���\n", i);
		}
	}
	return 0;
}
