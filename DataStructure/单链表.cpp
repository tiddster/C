#include<stdio.h>
#include<stdlib.h>
#define ERROR 0
#define OK  1

typedef int Status;
typedef int ElemType;

typedef struct Node{
	ElemType data;
	struct Node next; 
}Node;

typedef struct Node *LinkList;

Status GetElem(LinkList L, int i, ElemType *e);
Status ListInsert(LinkList *L, int i,ElemType e);
Status ListDelete(LinkList *L, int i,ElemType e);

int main(void){
	LinkList *head;
	LinkList L;
	L.data = 1;
	head->next = L;
}

Status GetElem(LinkList L, int i, ElemType *e){
	int j = 1;
	LinkList p;
	p =  L->next;
	while( p && j<i){
		p = p->next;
		j++;
	}
	if( !p || j>i) return ERROR;
	*e = p->data;
	return OK;
}

Status ListInsert(LinkList *L, int i, ElemType e){
	int j = 1;
	LinkList p=*L ,waitInsert;
	while(p && j<i){
		p = p->next;
		j++;
	}
	if( !p || j>i) return ERROR;
	
	waitInsert  =  (LinkList)malloc(sizeof(Node));
	waitInsert->data = e;
	waitInsert->next = p->next;
	p->next = waitInsert;
	free(waitInsert);
	return OK;
}

Status ListDelete(LinkList *L, int i){
	int j=1;
	LinkList p=*L ,waitDelete;
	while(p && j<i){
		p = p->next;
		j++;
	}
	if( !p || j>i) return ERROR;
	waitDelete = p->next;
	p->next = waitDelete->next;
	free(waitDelete);
	return OK;
}
