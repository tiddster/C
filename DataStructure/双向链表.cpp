#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct Node{
	ElemType data;
	struct Node *prior;
	struct Node *next;
}DouNode;

DouNode *createList(int n);

int main(void){
	DouNode *head, *curNode; 
	head = createList(4);
	curNode = head->next;
	while(curNode != head){
		printf("%d\n",curNode->data);
		curNode = curNode->next;
	}
} 

DouNode *createList(int n){
	DouNode *head = (DouNode*)malloc(sizeof(DouNode));
	head->next = NULL;
	head->prior = NULL;
	Node *p;
	p = head;
	for(int i=1; i<=n; i++){
		Node *temp = (DouNode*)malloc(sizeof(DouNode));
		temp->data = i;
		temp->next = NULL;
		
		p->next = temp;
		temp->prior = p;
		p = temp;
	}
	p->next = head;
	head->prior = p;
	return head;
}
