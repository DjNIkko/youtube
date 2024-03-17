//Command Line Agument
#include<stdio.h>
#include<stdlib.h>
//"argc" is argumen-count, "argv" is argument-value(vector)
void main(int argc,char *argv[])
{
    int n1,n2,ans;
    
    n1=atoi(argv[1]);//atoi function is convert argument to integer____
    n2=atoi(argv[2]);
    ans=n1*n2;
    printf("\nMul=%d",ans);
}