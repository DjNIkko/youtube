// menun driven program. calulate area of various shapes
#include <stdio.h>
#include <conio.h>.
#include <stdlib.h>
void main()
{

    char choice;
    float area, radius, length, breadth, height, base;
    float pi = 3.14;

    printf("\n C.Circle");
    printf("\n R.Rectangle");
    printf("\n T.Triangle");
    printf("\n x.Exit");

    printf("\n Enter choice: ");
    choice = getch();
    printf("%c", choice);

    switch (choice)
    {
    case 'X':
        exit(0);
        break;

    case 'C':
        printf("\n Enter Radius of Circle: ");
        scanf("%f", &radius);
        area = (pi * radius) * radius;
        printf("\n Area of Circle is: %f", area);
        break;

    case 'R':
        printf("\n Enter Length of Rectanle: ");
        scanf("%f", &length);
        printf("\n Enter Length of Rectanle: ");
        scanf("%f", &breadth);

        area = length * breadth;
        printf("\n Area of Rectagle is: %f", area);
        break;

    case 'T':
        printf("\n Enter Height of Triangle: ");
        scanf("%f", &height);
        printf("\n Enter Base of Triangle: ");
        scanf("%f", &base);

        area = (height * base) / 2;
        printf("\n Area of Triangle is: %f", area);
        break;

    default:
        printf("\n Wrong Input...");
        break;
    }
};