/*
����ĳ��ѧ��ĳ�ſεĳɼ�����಻����40�ˣ���
������Ϊ��ֵʱ����ʾ���������
�ú������ͳ�Ƴɼ�������ƽ���ֵ�ѧ��������
Ҫ��
(1)�����º���ԭ�ͽ��б�̣�
int GetAboveAver(int score[], int n);
(2)���������У�
 ����ѧ���ɼ���
 Ȼ����ú���GetAboveAver����ɼ�������ƽ���ֵ�ѧ��������
 ��������������
Ҫ��:
(1)ѧ���ɼ���ƽ���־�����Ϊint����
(2)**��������ʾ��Ϣ
**�����ʽΪ��"%d"
**�����ʽΪ��"Students of above average is %d\n"
*/
#include <stdio.h>
int GetAboveAver(int score[], int n);

int main(void){
    int score[40];
    int i = 0;
    int a;
    do{
    	scanf("%d",&a);
    	if(a >= 0){
    		score[i] = a;
		} else {
			break;
		}
    	i++;
	} while (i<39);
	printf("Students of above average is %d\n",GetAboveAver(score,i));
}

int GetAboveAver(int score[], int n){
	int average, num;
	int sum = 0;
	for(int i=0; i<n; i++){
		sum += score[i];
	}
	printf("%d",sum);
	average = sum/n;
	num = 0;
	for(int i=0; i<n; i++){
		if(score[i] >= average)
			num++;
	}
	return num++;
} 
