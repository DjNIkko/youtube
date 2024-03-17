#include <stdio.h>
#include <conio.h>
void main()
{
    // enter any 10 numbers and print only even numbers

    // int arr[10], i;

    // printf("\n ENTER ANY 10 NUMBERS: ");
    // for (i = 0; i < 10; i++)
    // {
    //     scanf(" %d", &arr[i]);
    // }

    // printf("\n ENTERED NUMBERS: ");
    // for (i = 0; i < 10; i++)
    // {
    //     printf(" %d", arr[i]);
    // }

    // printf("\n EVEN NUMBERS: ");
    // for (i = 0; i < 10; i++)
    // {
    //     // Printing Even Numbers only
    //     if (arr[i] % 2 == 0)
    //     {
    //         printf("\n %d", arr[i]);
    //     }
    //     else
    //     {
    //         printf("\t %d", arr[i]);

    //     }

    // }

    // find large number using array of 10 size

    // int arr[10], i, j, large;

    // printf("\n Enter 10 Numbers: ");
    // for (i = 0; i < 10; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    // large = arr[0];

    // for (i = 0; i < 10; i++)
    // {
    //
    //         if (arr[i] > large)
    //         {
    //             large = arr[i];
    //         }
    // }

    // printf("\n Large = %d", large);



    // arrange array elements in asending order

    int arr[5],i,j,t;

    printf("\n Enter Data: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    

    for ( i = 0; i < 5; i++)
    {
        for ( j = i+1; j<5; j++)
        {
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;

        }
        
    }
    
    printf("\n Large is: \n");

    for ( i = 0; i < 5; i++)
    {
        printf("\n %d",arr[i]);
    }
    

}