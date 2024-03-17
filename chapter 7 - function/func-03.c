// find area area of circle,Rectangle and Triangle menu driven program
#include <stdio.h>

// function declaration
float cir(float);
float rec(float, float);
float tri(float, float);

void main()
{

    float radius, lenght, breadth, height, base, ans;
    char choice,x;

    rep:

    // ask
    printf("\nC = Circle\nR = Rectangle\nT = Triangle");
    printf("\nFind Area of: ");
    choice = getch();
    printf("%c", choice);

    // perform operation
    switch (choice)
    {
    case 'C':
        printf("\nEnter Radius: ");
        scanf("%f", &radius);
        ans = cir(radius);
        printf("Area of Circle is: %f\n", ans);
        printf("\nWant to repeat this Operation- ");
        printf("\nY = yes N = no : ");
        x = getch();
        printf("%c",x);
        if (x == 'Y')
        {
            goto rep;
        }
        break;
    case 'R':
        printf("\nEnter Lenght & Breadth: ");
        scanf("%f%f", &lenght, &breadth);
        ans = rec(lenght, breadth);
        printf("Area of Rectangle is: %f\n", ans);
        printf("\nWant to repeat this Operation- ");
        printf("\nY = yes N = no : ");
        x = getch();
        printf("%c",x);
        if (x == 'Y')
        {
            goto rep;
        }
        break;
    case 'T':
        printf("\nEnter Height & Base: ");
        scanf("%f%f", &height, &base);
        ans = tri(height, base);
        printf("Area of Traingle is: %f\n", ans);
        printf("\nWant to repeat this Operation- ");
        printf("\nY = yes N = no : ");
        x = getch();
        printf("%c",x);
        if (x == 'Y')
        {
            goto rep;
        }
        break;
    default:
        printf("\nWrong Input..!");
        break;
    }
}
float cir(float radius)
{
    float ans;
    ans = 3.14*(radius * radius);
    return (ans);
}
float rec(float lenght, float breadth)
{
    float ans;
    ans = lenght * breadth;
    return (ans);
}
float tri(float height, float base)
{
    float ans;
    ans = 0.5 * height * base;
    return (ans);
}