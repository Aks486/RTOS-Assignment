#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	FILE *fptr;
	char file[20];
	int i;
	char list[] = "manipal";
	char string[200];
	printf("Enter the filename you want to remove the characters from: \n");
	scanf("%s",&file);
	fptr = fopen(file,"r");
	if(fptr == NULL){
		printf("Cannot find the file %s. Please try again.",file);
		exit(0);
	}
	for(i=0;!feof(fptr);i++){
		fscanf(fptr,"%c",string[i]);
	}
	printf("list: %d\n",strlen(list));
	for(i=0;i<ststr;i++){
		for(int j = 0;j<stlen;j++){
			if(string[i]==list[j]){
				string[i]=toupper(string[i]);
	    	}
		}
	}
return 0;
}
