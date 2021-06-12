/*
编写一个函数，输入大于1的整数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数 求1/1+1/3+...+1/n(要求利用函数指针编程)
输入格式："%d"
偶数输出："Even=%f"
奇数输出："Odd=%f"

程序运行示例1如下：
10
Even=1.141667
程序运行示例2如下：
9
Odd=1.787302
*/

#include <stdio.h>

float ODD(int n);
float EVEN(int n);
float Call(float (*p)(int n),int n);

int main(void){
	int n;
	scanf("%d",&n);
	if(n%2==0){
		printf("%d\nOdd=%f",n,Call(ODD,n));
	} else {
		printf("%d\nEven=%f",n,Call(EVEN,n));
	}
} 

float Call(float (*p)(int n),int n){
	float s = p(n);
	return s;
}

float ODD(int n){
	float sum = 0;
	for(int i=1; i<=n; i+=2){
		sum += (float)1/i;
	}
	return sum;
}

float EVEN(int n){
	float sum = 0;
	for(int i=2; i<=n; i+=2){
		sum += (float)1/i;
	}
	return sum;
}
