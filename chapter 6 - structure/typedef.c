// demo of typedef work
#include<stdio.h>
void main()
{
    typedef char name[10];
    name first,middle,last;

    printf("\nEnter Full Name: ");
    scanf("%s%s%s",first,middle,last);
    printf("%s %s %s",first,middle,last);
}