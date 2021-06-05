/*
��Ŀ���ݣ�
�������Ĺ������ö�̬��������������m����ѧ����ÿ��n��ѧ������ĳ�ſεĳɼ���������߷֣���ָ�����и���߷ֳɼ���ѧ���ǵڼ�����ĵڼ���ѧ�������У�m��n��ֵ���û��Ӽ����������루���޶�m��n������ֵ����
  �����ʽ��
        printf("Input array size m,n:\n");
        scanf("%d,%d", &m, &n);
        printf("Input %d*%d array:\n", m, n);
        scanf("%d",&p[i*n+j]);
  �����ʽ��
        printf("maxScore = %d, class = %d, number = %d\n", maxScore, row+1, col+1);
  ���������
        Input array size m,n:
        3,4�L
        Input 3*4 array:
        80 82 63 74�L
        60 81 75 68�L
        87 91 78 92�L
        maxScore = 92, class = 3, number = 4
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,m,*p;
	printf("Input array size m,n:\n");
	scanf("%d,%d", &m, &n);
	p = (int*) malloc(n*m*sizeof(int));
	printf("Input %d*%d array:\n", m, n);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &p[i*n+j]);
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d  ",p[i*n+j]);
		}
		printf("\n");
	}
	int row,col,maxScore;
	maxScore = p[0];
	row = 0;
	col = 0;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(maxScore < p[i*n+j]){
				maxScore = p[i*n+j];
				row = i;
				col = j;
			}
		}
	}
	printf("maxScore = %d, class = %d, number = %d\n", maxScore, row+1, col+1);
} 
