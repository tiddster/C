/*
��дһ���������������1������������nΪż��ʱ�����ú�����1/2+1/4+...+1/n,������nΪ����ʱ�����ú��� ��1/1+1/3+...+1/n(Ҫ�����ú���ָ����)
�����ʽ��"%d"
ż�������"Even=%f"
���������"Odd=%f"

��������ʾ��1���£�
10
Even=1.141667
��������ʾ��2���£�
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
