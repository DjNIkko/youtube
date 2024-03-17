// addition of two numbers using function
#include <stdio.h>

// function declaration
int add(int, int);
int sub(int, int);
int mul(int, int);
float div(float, float);

void main()
{
    int n1, n2, ans1, ans2, ans3;
    float ans4;
    char ope;

    // get input
    printf("\n Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    // ask
    printf("\nA = Addition ");
    printf("\nS = Substraction ");
    printf("\nM = Multiplication ");
    printf("\nD = Division ");
    printf("\nEnter Selection: ");
    ope = getch();
    printf("%c",ope);


    // slection
    switch (ope)
    {
    case 'A':
        ans1 = add(n1, n2);
        printf("\nAddition is: %d", ans1);
        break;
    case 'S':
        ans2 = sub(n1, n2);
        printf("\nSubstraction is: %d", ans2);
        break;
    case 'M':
        ans3 = mul(n1, n2);
        printf("\nmultiplication is: %d", ans3);
        break;
    case 'D':
        ans4 = div(n1, n2);
        printf("\nDivision is: %f", ans4);
        break;
    default:
        printf("\nWrong Input..!");
        break;
    }

}

// Defination
int add(int n1, int n2)
{
    int ans1;
    ans1 = n1 + n2;
    return (ans1);
}

int sub(int n1, int n2)
{
    int ans2;
    ans2 = n1 - n2;
    return (ans2);
}

int mul(int n1, int n2)
{
    int ans3;
    ans3 = n1 * n2;
    return (ans3);
}

float div(float n1, float n2)
{
    float ans4;
    ans4 = n1 / n2;
    return (ans4);
}