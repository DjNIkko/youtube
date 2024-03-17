// WAP to find greater number from given 3 numbers
#include <stdio.h>
#include <conio.h>
void main()
{

    int n1, n2, n3;

    printf("\nEnter First Number: ");
    scanf("%d", &n1);
    printf("\nEnter second Number: ");
    scanf("%d", &n2);
    printf("\nEnter third Number: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("\n %d is greater than %d and %d ", n1, n2, n3);
    }
    if (n2 > n1 && n2 > n3)
    {
        printf("\n %d is greater than %d and %d ", n2, n1, n3);
    }
    if (n3 > n2 && n3 > n1)
    {
        printf("\n %d is greater than %d and %d ", n3, n2, n1);
    }
}