#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void get_next(char *T, int *next);

int main(void){
	char *T = "aabaaf";
	int next[strlen(T)];
	get_next(T, next);
	for(int i=1; i<=strlen(T); i++){
		printf("%d\n", *(next+i));
	}
}

void get_next(char *T, int* next){
	int i = 0, j = 1;
	next[1] = 0;
	while(j<=strlen(T)){
		if(T[i] == T[j]){
			i++;
			j++;
			next[j] = i;
		} else if(i == 0) {
			j++;
			next[j] = 0;
		} else {
			i = next[i];
		}
	}
}
