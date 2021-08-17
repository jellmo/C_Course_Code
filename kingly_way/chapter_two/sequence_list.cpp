//˳�������������� c
#include<stdio.h>
#include<stdlib.h>		//malloc��free����ͷ�ļ� 

#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MaxSize 10	//�������Ա���󳤶�

typedef int status;      //status �Ǻ�������ֵ���ͣ���ֵ�Ǻ������״̬���롣
typedef int ElemType;    //ElemType Ϊ�ɶ�����������ͣ�����Ϊint����

//˳���ľ�̬����
typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;			

/*
	�����������˳���ĵ�i��λ�ò���Ԫ��e 
*/ 
bool ListInsert (SqList &L, int i, ElemType e) {
	//i�ĺϷ��������
	if (i<1 || i>L.length+1) {
		return false;
	}
	//����˳����Ƿ����� 
	if (L.length >= MaxSize) {
		return false;
	}
	//ִ�в������ 
	for (int j=L.length; j>=i; j--) {
		L.data[j] = L.data[j-1];
	}
	L.data[i-1] = e;
	L.length++;
	return true;
}

/*
	ɾ��������ɾ��˳���ĵ�i��Ԫ�أ������ñ���e����
*/
bool ListDelete(SqList &L, int i, ElemType &e){
	//i�ĺϷ��������
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
	��ֵ���Ҳ���������˳����е�һ����e��ȵ�Ԫ��
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