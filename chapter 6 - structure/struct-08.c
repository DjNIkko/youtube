// copying structure variable to another
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[100];
    char city[100];
    int pin;
};

void main()
{

    struct employee e1 = {"nikhat", "shahada", 9090};
    struct employee e2, e3;

    // copying e1 into e2
    e2 = e1;

    // copying manually
    strcpy(e3.name, e1.name);
    strcpy(e3.city, e1.city);
    e3.pin = e1.pin;

    // print
    printf("\n%s\t%s\t%d", e1.name, e1.city, e1.pin);
    printf("\n%s\t%s\t%d", e2.name, e2.city, e2.pin);
    printf("\n%s\t%s\t%d", e3.name, e3.city, e3.pin);
}