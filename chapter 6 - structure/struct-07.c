//Nested structure
#include<stdio.h>
struct address
{
    char city[100];
    int pin;
};

struct employee
{
    char name[100];
    struct address a;
};

void main(){

    struct employee e1 = {"ramu","shd",9090};
    struct employee e2 = {"reena","ndb",1010};

    printf("\n%s\t%s\t%d",e1.name,e1.a.city,e1.a.pin);
    printf("\n%s\t%s\t%d",e2.name,e2.a.city,e2.a.pin);
}