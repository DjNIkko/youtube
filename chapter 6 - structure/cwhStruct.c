#include <stdio.h>
#include <string.h>
void main()
{

    // creat structure and print the info of given name
    struct student
    {
        int id;
        int marks;
        char name[50];
    };

    struct student deva, vilas;

    deva.id = 0;
    vilas.id = 1;

    deva.marks = 90;
    vilas.marks = 80;

    strcpy(deva.name, "Deva Thakare");
    strcpy(vilas.name, "Vilas Vadile");


    //get input
    int id;
    printf("\n Enter ID: ");
    scanf("%d",&id);
                                                                        //incomplete
    // strcpy(d,deva.name);

    // printf("%s",d);

    if ( deva.id == id)
    {
        printf("\n ID: %d",deva.id);
        printf("\n Marks: %d",deva.marks);
        printf("\n Name: %s",deva.name);
    }
    else if (vilas.id == id)
    {
        printf("\n ID: %d",vilas.id);
        printf("\n Marks: %d",vilas.marks);
        printf("\n Name: %s",vilas.name);
    }
    else
    {
        printf("\n Student Not Found");
    }
    
    
    

}