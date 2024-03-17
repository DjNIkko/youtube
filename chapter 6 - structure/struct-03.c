#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[50];
    int m1;
    int m2;
    int m3;
    float total;
    float per;
    char pf[10];
    char grade[50];
};

struct student s1, s2, s3;

void main()
{

    // get input
    printf("\n Enter S1 Data: ");
    scanf("%d %s %d %d %d", &s1.roll, s1.name, &s1.m1, &s1.m2, &s1.m3);
    printf("\n Enter S2 Data: ");
    scanf("%d %s %d %d %d", &s2.roll, s2.name, &s2.m1, &s2.m2, &s2.m3);
    printf("\n Enter S3 Data: ");
    scanf("%d %s %d %d %d", &s3.roll, s3.name, &s3.m1, &s3.m2, &s3.m3);

    // find total
    s1.total = s1.m1 + s1.m2 + s1.m3;
    s2.total = s2.m1 + s2.m2 + s2.m3;
    s3.total = s3.m1 + s3.m2 + s3.m3;

    // find percentage
    s1.per = (s1.total / 300) * 100;
    s2.per = (s2.total / 300) * 100;
    s3.per = (s3.total / 300) * 100;

    // pass or fail
    if (s1.per >= 40)
    {
        strcpy(s1.pf, "pass");
    }
    else
    {
        strcpy(s1.pf, "fail");
    }
    //s2
    if (s2.per >= 40)
    {
        strcpy(s2.pf, "pass");
    }
    else
    {
        strcpy(s2.pf, "fail");
    }
    //s3
    if (s3.per >= 40)
    {
        strcpy(s3.pf, "pass");
    }
    else
    {
        strcpy(s3.pf, "fail");
    }

    // grade
    if (s1.per < 40)
    {
        strcpy(s1.grade, "Fail");
    }
    else if (s1.per <= 50)
    {
        strcpy(s1.grade, "pass");
    }
    else if (s1.per <= 60)
    {
        strcpy(s1.grade, "second class");
    }
    else if (s1.per < 70)
    {
        strcpy(s1.grade, "first class");
    }
    else
    {
        strcpy(s1.grade, "Distinction");
    }

    //s2
    if (s2.per < 40)
    {
        strcpy(s2.grade, "Fail");
    }
    else if (s2.per <= 50)
    {
        strcpy(s2.grade, "pass");
    }
    else if (s2.per <= 60)
    {
        strcpy(s2.grade, "second class");
    }
    else if (s2.per < 70)
    {
        strcpy(s2.grade, "first class");
    }
    else
    {
        strcpy(s2.grade, "Distinction");
    }

    //s3
    if (s3.per < 40)
    {
        strcpy(s3.grade, "Fail");
    }
    else if (s3.per <= 50)
    {
        strcpy(s3.grade, "pass");
    }
    else if (s3.per <= 60)
    {
        strcpy(s3.grade, "second class");
    }
    else if (s3.per < 70)
    {
        strcpy(s3.grade, "first class");
    }
    else
    {
        strcpy(s3.grade, "Distinction");
    }


    // print
    printf("\n Roll \t Name \t M1 \t M2 \t M3 \t Total \t\t Percentage \t Result \t Grade");
    printf("\n %d \t %s \t %d \t %d \t %d \t %f \t %f \t %s \t\t %s", s1.roll, s1.name, s1.m1, s1.m2, s1.m3, s1.total, s1.per, s1.pf, s1.grade);
    printf("\n %d \t %s \t %d \t %d \t %d \t %f \t %f \t %s \t\t %s", s2.roll, s2.name, s2.m1, s2.m2, s2.m3, s2.total, s2.per, s2.pf, s2.grade);
    printf("\n %d \t %s \t %d \t %d \t %d \t %f \t %f \t %s \t\t %s", s3.roll, s3.name, s3.m1, s3.m2, s3.m3, s3.total, s3.per, s3.pf, s3.grade);
}