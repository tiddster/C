#include <stdio.h>
/*
�Ӽ�������ѧ���ĳɼ����μ�������಻����40�ˣ���������Ϊ����ʱ����ʾ����������Ա�̽��������Ӹߵ���˳��������������

ͨ������sort�������з�������

**�����ʽҪ��"%d"
 ��ʾ��Ϣ��"Total students are %d\n" "Sorted scores:" "Input score:" 
**�����ʽҪ��"%4d"
*/

void sort(int score[], int n);

int main(void){
	int score[40], i, a;
	do{
		printf("Input score:" );
		scanf("%d",&a);
		if(a >= 0){
			score[i] = a;
		} else {
			break;
		}
		i++;
	} while (i<=39);
	
	sort(score,i);
	printf("Total students are %d\n",i);
	printf("Sorted scores:");
	for(int j=0; j<i; j++)
		printf("%d ", score[j]);
}

void sort(int score[], int n){
	int temp;
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			if(score[i] < score[j]){
				temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}
		}
	}
}
