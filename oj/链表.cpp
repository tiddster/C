#include <stdio.h>
#include <stdlib.h>
typedef struct data{
	int dta;
	struct data *next;
}DATA;

DATA *CreateList(int num);   //创建 
DATA *FindList(DATA *head, int index);   //查找
DATA *FindLast(DATA *head, int last);  //查找尾部 
DATA *Insert(DATA *head, int index); //插入 
DATA *Delete(DATA *head, int index); //删除 

int main(void) {
	int n;
	scanf("%d",&n);
	DATA *head;
	head = CreateList(n);
	/*
	head = FindList(head,2);        查找第2个 
	head = FindLast(head,n);		查找第n个~最后一个 
	*/
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

DATA *FindLast(DATA *head, int last){
	DATA *D = head;
	for(int i=1; i<last && D!=NULL; i++){
		D = D->next;
	}
	return D;
} 

DATA *Insert(DATA *head, int index){
	DATA *preD, *pD;
	pD = (DATA*)malloc(sizeof(DATA));
	scanf("%d",&*pD->dta);
	
	preD = FindList(head, index);
	if(preD != NULL){
		preD->next = pD;
		pD->next = preD->next;
	} else 
		printf("There is no such node\n");
}
