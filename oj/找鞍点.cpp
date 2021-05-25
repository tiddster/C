/*
找出一个二维数组中的鞍点，即该位置上的元素在该行最大，在该列上最小。也可能没有鞍点。
**输入数据格式：
"\n输入行数："
"%d"
"\n输入列数："
"%d"
"第%d行？\n"
"%d"
**输出格式要求：
"%5d"
"\n第%d行，第%d列的%d是鞍点\n"
"\n矩阵中无鞍点!\n"
程序的运行示例1如下：
输入行数：3
输入列数：3
第0行？
1 2 3
第1行？
4 5 6
第2行？
7 8 9
    1    2    3
    4    5    6
    7    8    9

第0行，第2列的3是鞍点
程序的运行示例2如下：
输入行数：2
输入列数：2
第0行？
1 2
第1行？
4 1
    1    2
    4    1

矩阵中无鞍点!
*/
#include <stdio.h>

int main(){
	int x[100][100],m,n,i,j,k,max,min,a,b,num=1;
	printf("\n输入行数："); 
	scanf("%d", &m);
	printf("\n输入列数：");
	scanf("%d", &n); 
	for(i=0;i<m;i++){
		printf("第%d行?\n",i);
		for(j=0;j<n;j++){
			scanf("%d", &x[i][j]); 
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%5d", x[i][j]); 
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++){
		max = x[i][0];
		b = 0;
		for(j=0;j<n;j++){  
			if(x[i][j]>max){  // 行内最大 
				max = x[i][j];
				b = j;  //i 行最大的数在j列，那么现在去第j列找最小的数，如果找到的数的行数为i，便是； 
			}		
		}
		
		min = x[i][b];  // 设目前最小为i行b列 
		a = i;  // 假设
		 
		for(k=0;k<m;k++){
			if(x[k][b]<min){  // 列内最小 
				min = x[k][b];
				a = k;  // 如果有更小的，那么a就变化 
			}
		}
		
		if(a==i){
			num = 0;
			printf("\n第%d行，第%d列的%d是鞍点\n",a,b,min);
		}
	}
	if(num){
		printf("\n矩阵中无鞍点!\n");
	}
	return 0;
}
