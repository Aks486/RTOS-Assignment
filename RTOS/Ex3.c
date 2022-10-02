// Read a string from a file. Count the number of characters in a given string without making use of the string library function. Use ‘for loop’. Get the input using ‘fscanf’. Use functions and pass string by reference.


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
    for(int i =0;!feof(fptr);i++)
		fscanf(fptr,"%c",&str[i]);
	int length = lengthOfString(str);
	printf("The lenght of string is : %d",length);
	return 0;
}
