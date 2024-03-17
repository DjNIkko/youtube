// Display the characters in reverse order from file by setting the pointer back at beginning of the file
#include<stdio.h>
void main(){
    
    char ch;
    FILE *fp;
    fp=fopen("a1.txt","r");

    //get lenght of file characters
    int i=0;
    while ((ch=getc(fp))!=EOF)
    {
        i++;
    }
    //print
    while (i>=0)
    {
        fseek(fp,i,0);
        printf("%C",getc(fp));
        i--;
    }
    
    
}