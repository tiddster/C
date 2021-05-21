/*
从键盘输入n个整数，用函数编程实现最大值和最小值的交换，并打印结果。
**输入格式要求："%d"  
  提示信息："Input n(n<=10):"  "Input %d numbers:"
**输出结果格式要求："%5d"
  提示信息："Exchange results:"
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

