#include <stdio.h>
#include <stdlib.h>
typedef struct data{
	int dta;
	struct data *next;
}DATA;

DATA *CreateList(int num);   //创建 
DATA *FindList(DATA *head, int index);   //查找
DATA *FindLast(DATA *head);  //查找尾部 
DATA *Insert(DATA *head, int index); //插入 
DATA *Delete(DATA *head, int index); //删除 

int main(void) {
	int n;
	scanf("%d",&n);
	DATA *head;
	head = CreateList(n);
	head = FindList(head,2);
	printf("%d",head->dta);
}

DATA *CreateList(int num){
	DATA *head;
	DATA *preD, *D;
	for(int i=0; i<num; i++){
		D = (DATA *) malloc(sizeof(D));
		
		if(i==0){
			if(D != NULL){
				scanf("%d",&D->dta);
				head = D;
				preD = D;
			}
		} else {
			if(D != NULL){
				scanf("%d",&D->dta);
				preD->next = D;
				preD = D;
			}
		}
	
	}
	
	D -> next = NULL;
	return head;
}

DATA *FindList(DATA *head, int index){
	DATA *D = head;
	for(int i=1; i<index && D!=NULL; i++){
		D = D->next;
	}
	return D;
} 
