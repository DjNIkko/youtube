#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[]){
    
    char ch;
    FILE *fp;
    fp=fopen(argv[1],"w");

    if (argc!=2)
    {
        printf("\nInvalid");
        exit(0);
    }

    while ((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    
    fclose(fp);

    printf("\none file copied");
}
