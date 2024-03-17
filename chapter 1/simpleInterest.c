// Simple Interest is calculated using the following formula: SI = P × R × T,
// where P = Principal, R = Rate of Interest, and T = Time period.

#include <stdio.h>
#include <conio.h>
void main()
{

    float principal, interest, timePeriod;
    printf("enter the principle: ");
    scanf("%f", &principal);
    printf("enter the Rate of Interest: ");
    scanf("%f", &interest);
    printf("enter the Time Period: ");
    scanf("%f", &timePeriod);

    float SI = principal * timePeriod*(interest  / 100);

    printf("Simple Interest is: %f", SI);
}
