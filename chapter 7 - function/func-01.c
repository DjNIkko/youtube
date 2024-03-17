//triangle function
#include <stdio.h>
float area(float, float);
void main()
{
     float lenght,base,a;

     //get input 
     printf("\nEnter Lenght: ");
     scanf("%f",&lenght);
     printf("\nEnter base: ");
     scanf("%f",&base);

     a = area(lenght,base);

     printf("\n Area of Triangle is : %f",a);
}

float area(float lenght,float base){
    float a;
    a = 0.5*lenght*base;
    return(a);
}