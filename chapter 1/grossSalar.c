// write a program to accept empno and basic salary for the employee 
// gross salar = Basic + HRA + DA;
// HRA=house rent allowance-घरभाड भत्ता
// DA=Dearness allowance-महंगाई भत्ता

#include <stdio.h>
#include <conio.h>
int main()
{

    int empno, basicSalary, HRA, DA, grossSalary;
    printf("\nEnter your Empno: ");
    scanf("%d", &empno);
    printf("\nEnter your Basic Salary: ");
    scanf("%d", &basicSalary);
    HRA = (basicSalary / 100) * 10;
    DA = (basicSalary / 100) * 20;

    printf("\nBasic Salary is: %d", basicSalary);
    printf("\nHouse Rent Allowance is: %d",HRA);
    printf("\nDearness Allowance is: %d",DA);

    grossSalary=basicSalary+HRA+DA;
    printf("\nGross Salary is: %d",grossSalary);
    return 0;
}
