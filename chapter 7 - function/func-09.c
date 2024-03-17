//call by refrence
#include<stdio.h>
void swap(int *,int *);

void main(){
    int a,b;

    //input
    printf("\nEnter Two Values: ");
    scanf("%d%d",&a,&b);

    swap(&a,&b);

    //print
    printf("\nswap:\na=%d\nb=%d",a,b);

}

void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}