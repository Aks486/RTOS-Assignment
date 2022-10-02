#include<stdio.h>

int main()
{  FILE *fptr;
	char ch,file[20];
	printf("Enter filename to write to: ");
	scanf("%s",file);
	fptr=fopen(file,"w");
	printf("Enter text: \n");
	scanf(" %c",&ch);
	while(ch!='\n')
	{
      fputc(ch,fptr);
	  scanf("%c",&ch);
	}
	fclose(fptr);
    return 0;
}
