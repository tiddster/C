/*
����ĳ��ѧ��ĳ�ſεĳɼ�����಻����40�ˣ������������û��������룩���ú������ͳ�Ʋ�����������
**�����ʽҪ��"%d"  ��ʾ��Ϣ��"How many students?"
**�����ʽҪ��"Fail students = %d\n"
��������ʾ�����£�
How many students?5
45 56 78 99 100
Fail students = 2
*/
#include <stdio.h>

int main(void){
	int score[40],n,m;
	printf("How many students?");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&score[i]);
	}
	m=0;
	for(int i=0; i<n; i++){
		if(score[i] < 60){
			m++;
		}
	}
	printf("Fail students = %d",m);
} 
