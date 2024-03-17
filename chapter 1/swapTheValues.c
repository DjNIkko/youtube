#include<stdio.h>
#include<conio.h>
void main (){
    int a,b,c;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;

    printf("\nFirst Number is: %d\nSecond Number is: %d",a,b);


}