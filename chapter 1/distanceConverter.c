// meter = 1000 * km
// ft = 3280.84 * km
// cm = 100000 * Km
// inch = 39370.07874 * km

#include <stdio.h>
#include <conio.h>
void main()
{

    float km, meter, cm, inch, feet;

    printf("\nEnter the distance of cities in Kilometer: ");
    scanf("%f", &km);

    meter = 1000 * km;
    cm = meter * 100;
    inch = cm / 2.54;
    feet = inch / 12;

    printf("\nDistance in meter : %f",meter);
    printf("\nDistance in Centimeter : %f",cm);
    printf("\nDistance in Inch : %f",inch);
    printf("\nDistance in Feet : %f",feet);

    
}