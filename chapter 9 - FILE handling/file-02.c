//data read from txt file
#include<stdio.h>
void main(){
    char ch;
    FILE *fp;
    fp = fopen("data.txt","r");

    printf("Your Data: \n");
    while ((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    
}