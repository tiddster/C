#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void get_next(char *T, int *next);   //方法一 
void get_new_next(char *T, int *next);   //方法2 
void match(char *S, char *T, int *next); 

int main(void){
	char *T = "a";
	char *S = "ab";
	
	int next[strlen(T)];
	int next2[strlen(T)];
	get_next(T, next);
	get_new_next(T, next2);
	
	for(int i=0; i<strlen(T); i++){
		printf("%d = %d\n", next[i+1], next2[i]);
	}
	get_next(T, next);
	match(S, T, next2);
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

void get_new_next(char *T, int *next){
	next[0] = 0;
	for(int i=1; i<strlen(T); i++){
		int count = 0;
		for(int n=0, m= i==1?i:i/2; m<=i; m++){
			int isBegin = false;
			if(T[n] == T[m]){
				count++;
				n++;
				isBegin = true;	
			} else if(isBegin) break;
		}
		next[i] = count;
	}
}

void match(char *S, char *T, int *next){
	if(strlen(S)<strlen(T)) return;
	
	int i=0, j=0;
	
	while(i<strlen(S)){
		if(S[i] == T[j]){
			i++;
			j++;
			if(j==strlen(T)) {
				printf("success");
				return;
			}
		} else {
			if(i==strlen(S)-1){
				printf("failed");
				return;
			}
			j = next[j];
		}
	}
}
