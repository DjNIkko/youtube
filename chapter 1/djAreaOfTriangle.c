#include<stdio.h>
#include<conio.h>
void main(){
    float height,base;

    printf("enter base of Triangle: ");
    scanf("%f",&base);

    printf("enter height of Triangle: ");
    scanf("%f",&height);

    float area = height*base/2;

    printf("Area of Triangle is: %f ",area);

}
