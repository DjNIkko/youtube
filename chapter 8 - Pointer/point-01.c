#include<stdio.h>
void main(){

    int x=10;
    int *p;

    p = &x;

    //print value
    printf("\n %d",x);
    printf("\n %d",*p);
    printf("\n %d",*(&x));

    //print address
    printf("\n %d",p);
}