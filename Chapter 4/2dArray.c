#include <stdio.h>
void main()
{

    // int arr0[3][3];

    // printf("\n enter arr0: ");
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         scanf("%d",&arr0[i][j]);
    //     }

    // }

    // printf("\n OUTPUT: \n");
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d",arr0[i][j]);
    //     }

    // }

    // convert two dimentional array into one dimensional arrry

    int a1[2][2], a2[4];

    // get input
    printf("\n Enter 2D array: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a1[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            a2[j] = a1[i][j];                   //incomplete
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d", a2[i]);
    }
}