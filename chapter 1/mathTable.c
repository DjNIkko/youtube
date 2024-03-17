#include <stdio.h>
#include <conio.h>
int main()
{

    int multiplicationNumber;
    printf("Enter Number for multiplication :");
    scanf("%d", multiplicationNumber);

    for (int i = 0; i < 10; i++)
    {
        printf(multiplicationNumber * i);
    }
}