/*
��������Insertion Sort�����ú������ʵ����һ������������������в���xӦ�����λ�ã���x���������У�ʹ����Ԫ���԰��������С�
**�����ʽҪ��"%d"  ��ʾ��Ϣ��"Input array size:"  "Input array:" "Input x:"
**�����ʽҪ��"After insert %d:\n" "%4d"
��������ʾ�����£�
Input array size:5
Input array:1  3  5  7  9
Input x:4
After insert 4:
   1   3   4   5   7   9
*/
#include <stdio.h>

void Sort(int array[], int n);

int main(void){
	int size,array[100],x;
	printf("Input array size:");
	scanf("%d",&size);
	printf("Input array:");
	for(int i=0; i<size; i++){
		scanf("%d",&array[i]);
	}
	printf("Input x:");
	scanf("%d",&array[size]);
	Sort(array, size+1);
	for(int i=0; i<=size; i++){
		printf("%d ",array[i]);
	}
}

void Sort(int array[], int n){
	int i, j, temp;
    for(i = 0; i<n; i++){
        for(j = 1; j<n; j++){
            if(array[j] < array[j-1]){
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
}
