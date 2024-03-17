
// formula of find area of circle  : A=πr2

#include<stdio.h>
#include<conio.h>
void main(){

    // find the area of circle
    
    float radius,area;
    float pi;
     pi = 3.14;
    // for clear the screen

    // clrscr();

    // get input from user
    printf("Enter the radius of Circle: ");
    scanf("%f",&radius);

    area = (pi*radius)*radius;
    printf("area of Circle is: %f ",area);

}