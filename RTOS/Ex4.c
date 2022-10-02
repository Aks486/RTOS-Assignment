#include <stdio.h>
#include <stdlib.h>

void linewordCount(int *l,int *w,FILE *f){
char ch;
while((ch=fgetc(f))!=EOF){
    if(ch==' ') *w+=1;
    if(ch=='\n') *l+=1;
    }
}

int main()
{
    FILE *fp;
    fp =fopen("akshay.txt","r");
    int line = 0;
    int words = 0;
    int *l,*w;
    l=&line;
    w=&words;
    linewordCount(l,w,fp);
    fclose(fp);
    printf("Number of Words: %d and Lines: %d",*w,*l);
    return 0;
}