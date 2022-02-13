//2.2.3节综合应用题
#include<stdio.h>
#include<stdlib.h>		//malloc、free函数头文件 

#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MaxSize 10	//定义线性表最大长度

typedef int status;      //status 是函数返回值类型，其值是函数结果状态代码。
typedef int ElemType;    //ElemType 为可定义的数据类型，此设为int类型

//顺序表的静态定义
typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;	

/*
    P17 2.
    设计一个算法，逆置顺序表所有元素，要求空间复杂度O(1)
*/
void Reverse(SqList &L) {
    ElemType temp;  //辅助变量
    for (int i = 0; i < L.length/2; i++) {
        temp=L.data[i];
        L.data[i]=L.data[L.length-1-i];
        L.data[L.length-1-i]=temp;
    }
    return;
}
