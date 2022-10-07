// Q9)
#include<stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
struct student
{	
	char names[50];
	int marks[5];
	char branch[10];
};


void details(FILE *fptr){
	struct student s;
	printf("Enter the name of student:\t");
	scanf("%s",&s.names);
	printf("Enter the branch:\t");
	scanf("%s",&s.branch);
	printf("Enter the marks in each subject\t");
	for(int i=0;i<5;i++){
		scanf("%d",&s.marks[i]);}
	fprintf(fptr,"| %s \t || %s\t|||",s.names,s.branch);
	for(int i=0;i<5;i++)
		fprintf(fptr," %d",s.marks[i]);
	fprintf(fptr,"\n");	
}
void check(FILE *fptr){
	struct student s;
	int i = 0;
	char ch[10];
	FILE *mark;
	mark=fopen("Marks.txt","a");
	while(!feof(fptr)){
		int flag =0;
		fscanf(fptr,"%s",ch);
	if(strcmp(ch,"|")==0){
		fscanf(fptr,"%s",s.names);
		printf("\nStudent Name: %s\n",s.names);
	}
	if(strcmp(ch,"||")==0){
		fscanf(fptr,"%s",s.branch);
		printf("branch: %s\n",s.branch);
	}
	if(strcmp(ch,"|||")==0 && !feof(fptr)){
		printf("Marks in each subject\n");
		for(int i=0;i<5;i++){
			fscanf(fptr,"%d",&s.marks[i]);
			if(s.marks[i]<80){
				flag=1;
			}
			printf("%d ",s.marks[i]);
		}	if(flag==0){
			fprintf(mark,"\nName: %s\n",s.names);
				fprintf(mark,"\nBranch: %s\n",s.branch);
				fprintf(mark,"Marks: ");
				for(int i =0;i<5;i++)
					fprintf(mark," %d",s.marks[i]);
		}	
	}
	}
	fclose(mark);
}
void greater(FILE *mark){
	char ch[10];
	struct student s;
	while(!feof(mark)){
		fscanf(mark,"%s",ch);
		if(strcmp(ch,"Name:")==0){
			fscanf(mark,"%s",s.names);
			printf("\nStudent Name: %s\n",s.names);
		}
		if(strcmp(ch,"Branch:")==0){
			fscanf(mark,"%s",s.branch);
			printf("\nBranch: %s\n",s.branch);
		}
		if(strcmp(ch,"Marks:")==0){
			for(int i =0;i<5;i++){
				fscanf(mark,"%d",&s.marks[i]);
				printf("%d ",s.marks[i]);}
		}
	}
}
int main(){
	struct student s;
	FILE *fptr,*mark;
	int choice =0;
	int i=0;
	bool run = false;
	if(fptr==NULL){
		printf("\nError file is empty..");
		exit(0);
	}while(!false){
	printf("\n1. Enter student detail\n 2. Check student details\n 3. Check which student has scored above 80 in all subjects\n 4. Exit\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		fptr = fopen("Data.txt","a");
		details(fptr);
		fclose(fptr);
		break;
		case 2:
			fptr=fopen("Data.txt","r");
			printf("Student details: \n");
			check(fptr);
			fclose(fptr);
			getch();
			break;
		case 3:
			printf("Student who scored more than 80 in all subjects:\n");
			mark=fopen("Marks.txt","r");
			greater(mark);
			fclose(mark);
			getch();
			break;
		case 4:
			return 0;
	}
}
	fclose(fptr);
	return 0;
}
