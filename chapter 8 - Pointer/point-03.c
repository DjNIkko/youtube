#include<stdio.h>

void main(){
    int *p1,*p2,x;

    *p1 = 10;
    *p2 = 20;

    //addition of pointer 
    x = *p1+*p2;

    //print
    printf("\n %d",x);
}