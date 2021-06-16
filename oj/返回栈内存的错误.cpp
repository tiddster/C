#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(int num);

int main(void){
	char *str = NULL;
	str = GetString(100);
	strcpy(str,"hello world");
	printf("%s",str);
	free(str);
	printf("%s",str);
	str = NULL;
}

char *GetString(int num){
	char *p = (char*)malloc(sizeof(char)*num);
	return p;
}
