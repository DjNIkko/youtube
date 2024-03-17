//swap two values
#include<stdio.h>
void swap();

void main(){
    swap();
}
void swap(){

    int a,b,c;

    //input
    printf("\nEnter Two Values: ");
    scanf("%d%d",&a,&b);
    
    //swap
    c = a;
    a = b;
    b = c;

    //print
    printf("\nAfter Swap:\na = %d\nb = %d",a,b);
}