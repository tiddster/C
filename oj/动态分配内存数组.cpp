/*
������̬���飬��д�������������С��ͨ����̬�����ڴ溯��malloc�������顣 ������Ԫ�ظ�ֵ������Ԫ�ص�ֵ�����±��10����
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter array size:"
**�����ʽҪ��"array[%d]=%d\n"
��������ʾ�����£�
Enter array size:8
array[0]=0
array[1]=10
array[2]=20
array[3]=30
array[4]=40
array[5]=50
array[6]=60
array[7]=70
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	printf("Enter array size:");
	scanf("%d",&n);
	int *p;
	p = (int*)malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
		*(p+i) = i*10;
	}
	for(int i=0; i<n; i++){
		printf("array[%d]=%d\n",i,*(p+i));
	}
} 
