//void function
#include<stdio.h>
void add();//function prototype

void main(){

    //function calling
    add();
}
void add(){
    int a,b,c;

    //input
    printf("\nEnter Two Numbers: ");
    scanf("%d%d",&a,&b);

    //add
    c=a+b;
    
    //print
    printf("\nAddition is: %d",c);
}