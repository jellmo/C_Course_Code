#include<stdio.h>

int main(void){
	
	double t, weight, height;
	printf("�������������(m)��");
	scanf("%lf", &height);
	printf("��������������(kg)��");
	scanf("%lf", &weight);
	t = weight / (height * height);
	printf("������֬��Ϊ��%lf\n", t); 
	if (t<18 && t>0) {
		printf("��������Ϊ������\n");
	} else if (t>=18 && t<25) {
		printf("��������Ϊ��������\n");
	} else if (t>=25 && t<27) {
		printf("��������Ϊ��������\n");
	} else if (t>=27) {
		printf("��������Ϊ����\n");
	} else {
		printf("���ݴ������������룡a");	
	}
	return 0;
}
