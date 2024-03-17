#include<stdio.h>

void main(){
    
    char ch;
    printf("\nA=Addition\nS=Substraction\nM=Multiplication\nD=Division\nEnter Choice: ");
    ch=getch();
    
    
    switch (ch)
    {
    case 'A':
        // int a,b;
        getValue();
        printf("%d",a+b);
        break;
    
    default:
        break;
    }
    
}
int getValue(){
    int a,b;
    printf("\nEnter First Number: ");
    scanf("%d",&a);
    printf("\nEnter Second Number: ");
    scanf("%d",&b);

    return(a,b);
}