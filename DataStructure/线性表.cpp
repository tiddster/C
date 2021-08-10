#include<stdio.h>
#include<string.h>
#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int ElemType;           //����Ԫ�� 
typedef int Status;
typedef struct{
	ElemType data[MAXSIZE];
	int length;
}Sqlist; 

//��ʼ����
void initList(Sqlist L);
//��ȡ��i��Ԫ�� 
Status GetElem(Sqlist L ,int i, ElemType *e);
//��Ԫ�ز��뵽��i��λ�� 
Status ListInsert(Sqlist *L, int i, ElemType e); 

int main(void){
	//��ʼ��˳��� 
	Sqlist list;
	list.data[0] = 1;
	list.length = 1;
	
	ElemType elemType = 2;
	ListInsert(&list,1,elemType);
	
	for(int i=0; i<list.length; i++){
		printf("%d\n",list.data[i]);
	} 
	
	printf("%d\n",list.length);
} 

//��ȡ��i��Ԫ�� 
Status GetElem(Sqlist L ,int i, ElemType *e){
	if(L.length==0||i<1||i>L.length)
		return ERROR;
	*e = L.data[i-1];
	return OK;
}
//��Ԫ�ز��뵽��i��λ�� 
Status ListInsert(Sqlist *L, int i, ElemType e){
	if(i<1||i>L->length)
		return ERROR;
	if(L->length == MAXSIZE)
		return ERROR;
	if(i<=L->length){
		for(int k=L->length; k>=i-1; k--){
			L->data[k+1] = L->data[k];
		}
	}
	L->data[i-1] = e;
	L->length++;
	return OK;
}
Status ListDelete(Sqlist *L, int i, ElemType *e){
	if(L->length==0) return ERROR;
	if(i<1 || i>L->length) return ERROR;
	*e = L->data[i-1];
	if(i<L->length){
		for(int k=i; k<L->length; k++)
			L->data[k-1] = L->data[k];
	}
	L->length--;
	return OK;
}
