// °C = (°F - 32) × 5/9;

#include <stdio.h>
#include <conio.h>
void main()
{
    float F, C;
    printf("Enter Temprature in Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) * 5 / 9;

    printf(" Temprature in Centigrade: %f", C);
}
