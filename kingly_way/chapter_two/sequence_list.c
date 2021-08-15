//顺序表基本操作代码 c
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
	插入操作，在顺序表的第i个位置插入元素e 
*/ 
bool ListInsert (SqList &L, int i, ElemType e) {
	//i的合法输入检验
	if (i<1 || i>L.length+1) {
		return false;
	}
	//检验顺序表是否已满 
	if (L.length >= MaxSize) {
		return false;
	}
	//执行插入操作 
	for (int j=L.length; j>=i; j--) {
		L.data[j] = L.data[j-1];
	}
	L.data[i-1] = e;
	L.length++;
	return true;
}

/*
	删除操作，删除顺序表的第i个元素，并引用变量e返回
*/
bool ListDelete(SqList &L, int i, ElemType &e){
	//i的合法输入检验
	if (i<1 || i>L.length) {
		return false;
	}
	e=L.data[i-1];
	for (int j=i; j<L.length; j++) {
		L.data[j-1] = L.data[j];
	}
	L.length--;
	return true;
}

/*
	按值查找操作，查找顺序表中第一个和e相等的元素
*/
int LocateElem(SqList L, ElemType e) {
	int i;
	for (i=0; i<L.length; i++) {
		if (e == L.data[i]) {
			return i+1;
		}
	}
	return 0;
}