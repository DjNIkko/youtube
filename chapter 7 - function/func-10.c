//recursion
#include<stdio.h>
int rec(int);

void main(){
    int a,fact;

    printf("\nEnter Number: ");
    scanf("%d",&a);

    fact=rec(a);

    printf("\n%d",fact);
}

int rec(int a){
    int f;
    if(a==1){
        return 1;
    }
    else{
        f=a*rec(a-1);
    }
    return f;
}