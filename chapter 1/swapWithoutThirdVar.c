#include <stdio.h>
#include <conio.h>
void main()
{

    int a, b;
    a = 1;
    b = 2;

    b = a+b;
    a=b-a;
    b=b-a;


   printf("\nafter swapping: \n%d",a);
   printf("\n%d",b);

}