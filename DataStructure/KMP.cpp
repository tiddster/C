 #include<stdio.h>
#include<string.h>
#include<stdlib.h>

void get_next(char *T, int *next);
void match(char *S, char *T, int *next); 

int main(void){
	char *T = "aabaaf";
	char *S = "aabaabaaf";
	int next[strlen(T)];
	get_next(T, next);
	match(S, T, next);
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
