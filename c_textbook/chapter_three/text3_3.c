#include<stdio.h>

int main(void) {
	
	const double rate = 0.0225;
	double capital, deposit;
	int n=5;	//�������Ϊ5�� 
	
	printf("���������ı���");
	scanf("%lf", &capital);
	deposit = capital + (capital * rate * 5);
	printf("5���ı���֮��Ϊ��%.2lf", deposit);
	return 0;
} 
