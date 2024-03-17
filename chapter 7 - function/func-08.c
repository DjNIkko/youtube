#include <stdio.h>
void sw(int, int);
void main()
{

    int a = 10, b = 20;

    sw(a, b);

    printf("\na = %d", a);
    printf("\nb = %d", b);
}

void sw(int x, int y)
{
    int c;
    c = x;
    x = y;
    y = c;

    printf("\n x = %d",x);
    printf("\n y = %d",y);


}