//data write in txt file
#include<stdio.h>
void main(){

    int ch;
    FILE *fp;
    fp = fopen("data.txt","w");

    printf("\nEnter Your Data: ");
    while((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    
}