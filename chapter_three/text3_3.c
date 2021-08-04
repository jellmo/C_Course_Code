#include<stdio.h>

int main(void) {
	
	const double rate = 0.0225;
	double capital, deposit;
	int n=5;	//假设存期为5年 
	
	printf("请输入您的本金：");
	scanf("%lf", &capital);
	deposit = capital + (capital * rate * 5);
	printf("5年后的本利之和为：%.2lf", deposit);
	return 0;
} 
