// structure with array
#include <stdio.h>
struct book
{
    char name[50];
    int price;
    int pages;
};

void main()
{

    struct book b[3];
    printf("\n Enter Data: ");

    for (int i = 0; i < 3; i++)
    {
        scanf("%s%d%d", b[i].name,&b[i].price,&b[i].pages);
    }

    printf("\n Name \t Price \t Pages");
    for (int i = 0; i < 3; i++)
    {
        printf("\n%s\t%d\t%d", b[i].name, b[i].price, b[i].pages);
    }
}
