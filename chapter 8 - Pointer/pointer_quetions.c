#include<stdio.h>
void main(){

    // //show the basic declarations of pointer
    // int m=10;
    // int *z;
    // z = &m;
    // //print
    // printf("\n m is %d",m);
    // printf("\n &m is %d",&m);
    // printf("\n z is %d",z);
    // printf("\n *z is %d",*z);

    // //demonstrate handle of pointer
    // int a=66;
    // int *ab;
    // ab = &a;
    // //print
    // printf("\nvalue of a= %d",a);
    // printf("\naddress of a= %d",&a);
    // printf("\nvalue of ab= %d",*ab);
    // printf("\naddress of ab= %d",ab);

    //add two numbers using pointers
    int *a,*b;
    // get input
    printf("\nEnter Two Numbers: ");
    scanf("%d%d",&*a,&*b);
    //print
    printf("\nAdd is: %d",(*a+*b));
    





}