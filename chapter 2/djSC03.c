#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int n1, n2, ans;
    char ope;
    // clrscr();

    printf("\n Enter Any Two Numbers : ");
    scanf("%d %d", &n1, &n2);

    printf("\n + for Addition");
    printf("\n - for Substraction");
    printf("\n * for Multiplication");
    printf("\n / for Division");
    printf("\n X for Exit");
    
    printf("\n Enter Operation To Peform : ");
    ope = getch();
    printf("%c", ope);

    switch (ope)
    {
    case 'X':
        exit(0);
        break;
    case '+':
        ans = n1 + n2;
        printf("\n Addition is: %d", ans);
        break;
    case '-':
        ans = n1 - n2;
        printf("\n Substraction is: %d", ans);
        break;
    case '*':
        ans = n1 * n2;
        printf("\n Multiplication is: %d", ans);
        break;
    case '/':
        ans = n1 / n2;
        printf("\n Division is %d", ans);
        break;

    default:
        printf("\n Wrong Input");
        break;
    }
    // getch();
}