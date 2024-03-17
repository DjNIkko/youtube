// get student result using struct-array
#include <stdio.h>
struct student
{
    char name[50];
    int sanskrit;
    int marathi;
    int science;
    float total;
    float per;
    char res[10];
    char grd[50];
};

struct student s[3];

void main()
{

    // get data
    printf("\n Enter Data: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s%d%d%d", s[i].name, &s[i].sanskrit, &s[i].marathi, &s[i].science);
    }

    // total
    for (int i = 0; i < 3; i++)
    {
        s[i].total = s[i].sanskrit + s[i].marathi + s[i].science;
    }

    // percentage
    for (int i = 0; i < 3; i++)
    {
        s[i].per = (s[i].total / 300) * 100;
    }

    // result
    for (int i = 0; i < 3; i++)
    {
        if (s[i].per >= 40)
        {
            strcpy(s[i].res, "pass");
        }
        else
        {
            strcpy(s[i].res, "fail");
        }
    }

    // grade
    for (int i = 0; i < 3; i++)
    {
        if (s[i].per < 40)
        {
            strcpy(s[i].grd, "fail");
        }
        else if (s[i].per <= 50)
        {
            strcpy(s[i].grd, "pass");
        }
        else if (s[i].per <= 60)
        {
            strcpy(s[i].grd, "second class");
        }
        else if (s[i].per < 70)
        {
            strcpy(s[i].grd, "first class");
        }
        else
        {
            strcpy(s[i].grd, "distinction");
        }
    }

    // print
    printf("\nName\tSanskrit\tMarathi\tScience\tTotal\tPercentages\tResult\tGrade");
    for (int i = 0; i < 3; i++)
    {
        printf("\n%s\t%d\t%d\t%d\t\t%d\t%f\t%s\t%s", s[i].name, s[i].sanskrit, s[i].marathi, s[i].science, (int)s[i].total, s[i].per, s[i].res,s[i].grd);
    }
}