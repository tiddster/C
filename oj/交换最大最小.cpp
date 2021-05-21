/*
�Ӽ�������n���������ú������ʵ�����ֵ����Сֵ�Ľ���������ӡ�����
**�����ʽҪ��"%d"  
  ��ʾ��Ϣ��"Input n(n<=10):"  "Input %d numbers:"
**��������ʽҪ��"%5d"
  ��ʾ��Ϣ��"Exchange results:"
*/
#include <stdio.h>

int Find(int num[], int n, int m);
void Swap(int *a, int *b);

int main(void){
	int n,num[10],flagMax,flagMin;
	printf("Input n(n<=10):");
	scanf("%d",&n);
	printf("Input %d numbers:",n);
	for(int i=0; i<n; i++){
		scanf("%d",&num[i]);
	}
	flagMax = Find(num, n, 1);
	flagMin = Find(num, n, 0);
	Swap(&num[flagMax],&num[flagMin]);
	
	printf("Exchange results:");
	for(int i=0; i<n; i++){
		printf("%5d",num[i]);
	}
} 

int Find(int num[], int n, int m){
	int temp = num[0];
	int flag = 0;
	for(int i=1; i<n;i++){
		if(m == 0){
			if(temp < num[i])
				flag = i;
		}
		else{
			if(temp > num[i])
				flag = i;
		}
	}
	return flag;
}

void Swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

