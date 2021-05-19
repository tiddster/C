/*
插入排序（Insertion Sort）。用函数编程实现在一个按升序排序的数组中查找x应插入的位置，将x插入数组中，使数组元素仍按升序排列。
**输入格式要求："%d"  提示信息："Input array size:"  "Input array:" "Input x:"
**输出格式要求："After insert %d:\n" "%4d"
程序运行示例如下：
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
