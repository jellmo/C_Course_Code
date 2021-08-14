//水仙花数 
#include<stdio.h>

int main(void){
	
	int i, bits, tens, hundreds, sum;
	for (i=100; i<=999; i++){
		
		hundreds = i / 100;	//计算百位数 
		tens = i / 10 % 10;   //计算十位数
		bits = i % 10;	//计算个位数
		sum = hundreds*hundreds*hundreds+tens*tens*tens+bits*bits*bits;
		if (i == sum){
			printf("%d是水仙花数\n", i);
		}
	}
	return 0;
}
