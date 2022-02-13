//单链表基本操作代码 c
#include<stdio.h>
#include<stdlib.h>		//malloc、free函数头文件 

#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MaxSize 10	//定义线性表最大长度

typedef int ElemType;

typedef struct LNode {
    ElemType data;      //数据域
    struct LNode *next; //指针域
}LNode, *LinkList;

//头插法建立单链表，逆序
LinkList List_HeadInsert(LinkList &L) {
    
    LNode *s; int x;
    L=(LinkList)malloc(sizeof(LNode));    //创立头节点
    L->next=NULL;       //初始时链表置空
    scanf("%d", &x);
    while (x!=-9999) {
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        scanf("%d", &x);
    }
    return L;
}

//尾插法建立单链表
LinkList List_TallInsert(LinkList &L) {
    
    int x;
    LNode *s, *r;   //r为尾指针
    L=(LinkList)malloc(sizeof(LNode));    //创立头节点
    r=L;
    L->next=NULL;       //初始时链表置空
    scanf("%d", &x);
    while (x!=-9999) {
        s=(LinkList)malloc(sizeof(LNode));
        s->data=x;
        r->next=s;  //让当前表尾节点指向新节点
        r=s;        //移动尾指针到新节点
        scanf("%d", &x);
    }
    r->next=NULL;   //让整表的尾节点指向NULL
    return L;
}

//按序号查找节点值
LNode *GetElem(LinkList &L, int i) {
    
    int j=1;
    LNode *p=L->next;
    if (i==0) {
        return L;
    }
    if (i<1) {
        return NULL;
    }
    for (j=1; j<i && p!=NULL; j++) {
        p=p->next;
    }
    return p;
}

//按值查找节点值
LNode *LocateElem(LinkList &L, ElemType e) {
    LNode *p=L->next;
    while (p!=NULL&&p->data!=e) {
        p=p->next;
    }
    return p;
}