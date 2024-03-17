// fseek(), rewind(), ftell();
#include<stdio.h>
void main(int argc,char argv[])
{
    char ch;
    int i=0;
    FILE *fp;
    fp = fopen("data.txt", "r");
    
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }
                                        //incomplete
    
   
    
    
}