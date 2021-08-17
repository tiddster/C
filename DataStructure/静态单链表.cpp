#include<stdio.h>

#define MAXSIZE 100

typedef struct{
	int data;
	int cur;
}Component, StaticLinkList[MAXSIZE];

void InitList(StaticLinkList space);
int Malloc_SLL(StaticLinkList space);
void ListInsert(StaticLinkList L, int i, int data);
void Free_SLL(StaticLinkList space, int i); 
void ListDelete(StaticLinkList L, int i);

int main(void){
	StaticLinkList L;
	InitList(L);
	ListInsert(L, 1, 1);
	ListInsert(L, 2, 2);
	ListInsert(L, 3, 3);
	ListInsert(L, 4, 4);
	ListInsert(L, 5, 5);
	ListInsert(L, 6, 6);
	ListInsert(L, 3, 9);
	ListDelete(L, 3);
	
	int i=1;
	while(L[i].data != -200){
		printf("%d %d\n",L[i].data,L[i].cur);
		i = L[i].cur;
	}
}

void InitList(StaticLinkList space){
	for(int i=0; i<MAXSIZE-1; i++){
		space[i].cur = i+1;
		space[i].data = -200;
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
	int  j;
	if(i<1||i>MAXSIZE) return;
	
	j = Malloc_SLL(L);
	if(j){
		L[j].data = data;
		if(j!=i){
			L[j].cur = L[i].cur;
			L[i].cur = j+1;
			L[i-1].cur = j;
			L[j-1].cur = i;
		}
		return;
	}
	return;
} 

void Free_SLL(StaticLinkList space, int i){
	space[0].cur = space[i].cur;
}

void ListDelete(StaticLinkList L, int i){
	if(i<1||i>MAXSIZE) return;
	
	int j = 1;
	while(j<3){
		j = L[j].cur;
	}
	Free_SLL(L,i);
	L[j].data = 0;
}
