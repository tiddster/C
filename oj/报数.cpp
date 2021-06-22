/*
n个人围成一圈，顺序编号。从第一个人开始从1到m报数，凡报到m的人退出圈子，编程求解最后留下的人的初始编号。
样例输入：（第一行输入）
6 3（两个输入数据之间有空格）
样例输出：（换行输出）
1
*/
#include <stdio.h>

int main(void){
	int n,m,a[100];
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++){
		a[i] = 1;
	}
	
	int rest = n;
	int flag = -1;
	
	//剩下的不等于1时循环 
	while(rest!=1){
		for(int i=0; i<m; i++){
			flag++;
			
			//当flag代表的数字为0时跳过 
			while(a[flag] == 0)
				flag++;
				
			//当flag大于人数时回到0 
			if(flag >= n)
				flag = 0;
			
			//可能flag为0时也为0 所以要再次跳过 
			while(a[flag] == 0)
				flag++;
		}
		printf("%d--",flag+1);
		//将报m的数字设为0 
		a[flag] = 0;
		rest--;
	}
	
	for(int i=0; i<n; i++){ 
		if(a[i] != 0){
			printf("%d\n",i+1);
		}
	}
} 
