/*
����һ������ʹ�����д�ͷ��β�Ľ��������������һ������ĸ���Ԫ�ص�ֵ�������Ƚ�������Ȼ���ٱ���������ٶ�������������6������Ԫ�أ���
��������ʾ�����£�
��������6��Ԫ�ص�ֵ��
1 3 5 7 9 11
�������������������Ϊ��1 3 5 7 9 11 
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct intiger{
	int x;
	struct intiger *next;
} INT;

void create(INT *Int);
void find(INT *Int);

int main(void){
	INT pInt[6];
	create(pInt);
	find(pInt);
} 

void create(INT *Int){
	INT *p = (INT*)malloc(sizeof(INT));
	printf("��������6��Ԫ�ص�ֵ��\n");
	for(int i=0; i<6; i++, Int++){
	    scanf("%d",&Int->x);
		p->next = Int;
		p = Int;
	}
}

void find(INT *Int){
    printf("�������������������Ϊ��");
	while(Int!=NULL){
		printf("%d ",Int->x);
		Int = Int->next;
	}
}
