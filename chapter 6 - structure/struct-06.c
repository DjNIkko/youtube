#include <stdio.h>
struct employee
{
    int eno;
    char ename[100];
    int bs;
    int hra;
    int da;
    int gross;
};

struct employee emp[2];

void main()
{

    // get data
    printf("\n Enter Data: ");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d%s%d", &emp[i].eno, emp[i].ename, &emp[i].bs);
    }

    // hra
    for (int i = 0; i < 2; i++)
    {
        emp[i].hra = emp[i].bs * 0.10;
    }

    // da
    for (int i = 0; i < 2; i++)
    {
        emp[i].da = emp[i].bs * 0.20;
    }

    // gross
    for (int i = 0; i < 2; i++)
    {
        emp[i].gross = emp[i].hra + emp[i].da + emp[i].bs;
    }

    // set total
    int bsTtl = 0, hraTtl = 0, daTtl = 0, grsTtl = 0;
    for (int i = 0; i < 2; i++)
    {
        bsTtl = bsTtl + emp[i].bs;
        hraTtl = hraTtl + emp[i].hra;
        daTtl = daTtl + emp[i].da;
        grsTtl = grsTtl + emp[i].gross;
    }
    // print
    printf("\nEmpno.\tEname\tBasic\tHRA\tDA\tGross");
    for (int i = 0; i < 2; i++)
    {
        printf("\n%d\t%s\t%d\t%d\t%d\t%d", emp[i].eno, emp[i].ename, emp[i].bs, emp[i].hra, emp[i].da, emp[i].gross);
    }

    // print total vertically
    printf("\n\t\t%d\t%d\t%d\t%d", bsTtl, hraTtl, daTtl, grsTtl);
}