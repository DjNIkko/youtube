#include <stdio.h>
#include <conio.h>
void main()
{

    float basicSalary, bonus;

    printf("Enter the value : ");
    scanf("%f",&basicSalary);

    bonus = (basicSalary / 100) * 2;

    printf("\n Bonus is: %f", bonus);
}

