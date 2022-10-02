#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr, *even,*odd;
    char file[100], ch[100];

    printf("Enter the input file name\n");
    scanf("%s", file);
    fptr = fopen(file, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file %s \n", file);
        exit(0);
    }
    printf("Enter the filename to write even text \n");
    scanf("%s", file);
    even = fopen(file, "w");
    printf("Enter the filename to write odd text \n");
    scanf("%s", file);
    odd = fopen(file, "w");
    for(int i=1;!feof(fptr);i++)
    {
        fscanf(fptr,"%s",ch);
         if(i%2==0)
 	    {
 	 	   fprintf(even,"%s ",ch);
        }else{
         fprintf(odd,"%s ",ch);
        }
    }
    fclose(fptr);
    fclose(even);
    fclose(odd);
    return 0;
}


