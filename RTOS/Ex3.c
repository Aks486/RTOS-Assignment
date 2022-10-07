// Q3)
#include <stdio.h>
#include<stdlib.h>
int lengthOfString(char *p){
	int count = 0;
	while(*p != '\0'){
		count++;
		p++;
	}
	return count;
}
int main(){
	FILE *fptr;
	fptr =fopen("input.txt","r");
	char str[100];
	if(fptr==NULL){
		printf("File not found...");
		exit(0);
	}
	fscanf(fptr,"%[^\n]s",str);
	int length = lengthOfString(str);
	printf("The lenght of string is : %d",length);
	return 0;
}

