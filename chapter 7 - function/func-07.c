// demonstrate use of function having argument
#include <stdio.h>
int calc(int);

void main()
{

    int salary, bonus;

    printf("\nEnter salary: ");
    scanf("%d", &salary);

    bonus = calc(salary);

    printf("\nsalary: %d", salary);
    printf("\nbonus: %d", bonus);
}

int calc(int salary)
{
    int bonus;
    if (salary > 5000)
    {
        bonus = salary * 0.10;
    }
    else
    {

        bonus = salary * 0.05;
    }
    return (bonus);
}