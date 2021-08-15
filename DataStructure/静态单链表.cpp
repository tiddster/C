#include<stdio.h>

#define MAXSIZE 100

typedef struct{
	int data;
	int cur;
}Component, StaticLinkList[MAXSIZE];

void InitList(StaticLinkList space);
int Malloc_SLL(StaticLinkList space);
void ListInsert(StaticLinkList L, int i, int data);

int main(void){
	StaticLinkList L;
	InitList(L);
	ListInsert(L, 1, 1);
	ListInsert(L, 2, 2);
	ListInsert(L, 3, 3);
	ListInsert(L, 4, 4);
	ListInsert(L, 5, 5);
	ListInsert(L, 6, 6);
	
	for(int i=1; i<=10; i++){
		printf("%d\n",L[i].data);
	}
}

void InitList(StaticLinkList space){
	for(int i=0; i<MAXSIZE-1; i++){
		space[i].cur = i+1;
	}
	space[MAXSIZE-1].cur = 0;
}

//返回第一个无数据游标  
int Malloc_SLL(StaticLinkList space){
	int i = space[0].cur;
    space[0].cur = space[i].cur;
	return i;
} 

void ListInsert(StaticLinkList L, int i, int data){
	int  j,k;
	if(i<1||i>MAXSIZE) return;
	
	j = Malloc_SLL(L);
	printf("位置：%d\n",j);
	if(j){
		L[j].data = data;
		k=i;
		L[j].cur = L[k].cur;
		L[k].cur = j;
		return;
	}
	return;
} 
