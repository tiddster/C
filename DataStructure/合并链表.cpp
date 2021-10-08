#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct Node{
	ElemType data;
	struct Node *next;
}Node;

Node* CreateList(Node *head, int n);
Node* Intergrate(Node *LA, Node *LB);

int main(void){
	Node *headLa, *headLb, *head;
	int number = 0;
	scanf("%d",&number);
	headLa = CreateList(headLa, number);
	scanf("%d",&number);
	headLb = CreateList(headLb, number);
	head = Intergrate(headLa, headLb);
	Node *r;
	r = head->next;
	while(r!=NULL){
		if(r->next == NULL) printf("%d", r->data);
		else printf("%d ", r->data);
		r = r->next;
	}
}

Node* CreateList(Node *head, int n){
	Node *p, *r;
	head = (Node*)malloc(sizeof(Node));
	r = head;
	for(;n>0;n--){
		ElemType e;
		p = (Node*)malloc(sizeof(Node));
		scanf("%d",&e);
		p->data = e;
		p->next = NULL;
		r->next = p;
		r = p;
	}
	return head;
}

Node* Intergrate(Node *LA, Node *LB){
	Node *head = (Node*)malloc(sizeof(Node));
	Node *r;
	r = head;
	Node *a = LA->next, *b = LB->next;
	while(a!=NULL||b!=NULL){
		Node *temp = (Node*)malloc(sizeof(Node));
		if(a==NULL){
			temp->data = b->data;
			temp->next = NULL;
			b = b->next;
		} else if(b == NULL){
			temp->data = a->data;
			temp->next = NULL;
			a = a->next;
		} else if(a->data > b->data){
			temp->data = b->data;
			temp->next = NULL;
			b = b->next;
		} else if(a->data <= b->data){
			temp->data = a->data;
			temp->next = NULL;
			a = a->next;
		}
		
		r->next = temp;
		r = temp;
	}
	return head;
}
