#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define ERROR 0
#define OK  1

typedef int Status;
typedef int ElemType;

typedef struct Node{
	ElemType data;
	struct Node *next; 
}Node;

typedef struct Node *LinkList;

Status GetElem(LinkList L, int i, ElemType *e);
Status ListInsert(LinkList *L, int i,ElemType e);
Status ListDelete(LinkList *L, int i,ElemType e);
void CreateList(LinkList *L, int n); 
void ClearList(LinkList *L);

int main(void){
	LinkList *head = NULL;
	LinkList p = (LinkList)malloc(sizeof(Node));
	CreateList(head, 8);
	p = (*head)->next;
	while(p){
		printf("%d", p->data);
		p = p->next;
	}
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

void CreateList(LinkList *L, int n){
	LinkList p,r;
	*L = (LinkList)malloc(sizeof(Node));
	r = *L;
	for(int i=0; i<n; i++){
		p = (Node*)malloc(sizeof(Node));
		scanf("%d",&p->data);
		r->next = p;
		r = p;
		free(p);
	}
}

void ClearList(LinkList *L){
	LinkList p,q;
	p = (*L)->next;
	while(p){
		q = p->next;
		free(p);
		p =q;
	}
	(*L)->next= NULL;
}
