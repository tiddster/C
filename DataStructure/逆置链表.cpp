#include<stdio.h>
#include<stdlib.h>
typedef char ElemType;
typedef struct Node{
	ElemType data;
	struct Node *next;
}Node;

Node* CreateList(Node *head, int n);
Node* reverse(Node *head);

int main(void){
	Node *head = NULL;
	head = CreateList(head, 5);
  	Node *r;
	r = head->next;
	while(r!=NULL){
		if(r->next == NULL) printf("%c", r->data);
		else printf("%c ", r->data);
		r = r->next;
	}
	head = reverse(head);
  	printf("\n");
	r = head;
	while(r->next!=NULL){
		if(r->next->next == NULL) printf("%c", r->data);
		else printf("%c ", r->data);
		r = r->next;
	}
} 

Node* CreateList(Node *head, int n){
	Node *p, *r;
	head = (Node*)malloc(sizeof(Node));
	r = head;
	for(;n>0;n--){
		char c;
		p = (Node*)malloc(sizeof(Node));
		do{
			c = getchar();
		} while(c==' ');
		p->data = c;
		p->next = NULL;
		r->next = p;
		r = p;
	}
	return head;
}

Node* reverse(Node *head){
	Node *p, *q, *r;
	p = head;
	q = r = NULL;
	while(p!=NULL){
		q = p->next;
		p->next = r;
		r = p;
		p = q;
	}
	return r;
}

