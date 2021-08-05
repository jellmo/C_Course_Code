#include<stdio.h>

int main(void){
	
	double t, weight, height;
	printf("请输入您的身高(m)：");
	scanf("%lf", &height);
	printf("请输入您的体重(kg)：");
	scanf("%lf", &weight);
	t = weight / (height * height);
	if (t<18 && t>0) {
		printf("您的体重为低体重\n");
	} else if (t>=18 && t<25) {
		printf("您的体重为正常体重\n");
	} else if (t>=25 && t<27) {
		printf("您的体重为超重体重\n");
	} else if (t>=27) {
		printf("您的体重为肥胖\n");
	} else {
		printf("数据错误，请重新输入！a");	
	}
	return 0;
}
