#include <stdio.h>
#include <conio.h>
int main()
{

    // // print multiplication table programme -
    // int mulNum;
    // printf("Enter number to Multiplication : ");
    // scanf("%d",&mulNum);
    // int i ;
    // for ( i = 1; i < 11; i++)
    // {
    //     printf("%d * %d = %d \n",mulNum,i,mulNum*i);
    // }

    // // how to swap two values :
    // int value_1 = 23 , value_2 = 54 , egValue ;
    // printf("%d %d \n",value_1,value_2);
    // egValue = value_1 ;
    // value_1 = value_2 ;
    // value_2 = egValue ;
    // printf("%d %d \n",value_1,value_2);

    // print odd numbers 1 to 30 -
    // int odd;
    //     for (odd = 1; odd <= 30; odd += 2)
    //     {
    //         printf("%d \n", odd);
    //     }

    // // print even numbers 1 to 30 -
    // //     int even;
    // //     for (even = 2; even <= 30; even += 2)
    // //     {
    // //         printf("%d \n", even);
    // //     }

    // // print array's elements
    // int arr[5] = {1, 2, 3, 4, 5};
    // // int lenght = sizeof(arr[5]);
    // // printf("\n sizeof : %d\n\n", lenght);
    // int i;
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d \n", arr[i]);
    // }

    // print odd number 1 to 31 -
    // int odd;
    // for ( odd = 1; odd < 31; odd += 2)
    // {
    //     printf("%d \n",odd);
    // }

    // // print your name, DOB, Mobile Number -
    // printf("\n DJ Koli \n 19/08/2002 \n 8080389717 \n");

    // using input
    char name, add;
    int dob;
    printf("Name : ");
    scanf("%s",&name);

    printf("DOB : ");
    scanf("%d",&dob);

    printf("Address : ");
    scanf("%s",&add);
    printf(name, dob, add);

}
