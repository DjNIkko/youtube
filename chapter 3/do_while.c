#include <stdio.h>
#include <conio.h>
void main()
{

    // print your name 5 times

    // char name =  'D';
    // int i;

    // do
    // {
    //     printf("\n Name : %c",name);
    //     i++;
    // }while(i <= 4);

    // print number 10 to 1
    // int num = 10;
    // do
    // {
    //     printf("\n %d",num);
    //     num--;
    // } while (num>0);

    // print the table of specific number 2
    // int num = 2,i=1;
    // do
    // {
    //     printf("\n %d",(num*i));
    //     i++;
    // } while (i<=10);

    // print the list of odd numbers from 1 to 10
    // int odd;
    // do
    // {
    //     if (odd%2==1)
    //     {
    //     printf("\n %d",odd);
    //     }
    //     odd++;

    // } while (odd<=10);

    // fibonacci series of first fifteen numbers
    // int a=0,b=1,c,i=1;

    // do
    // {
    //     c = a+b;
    //     printf("\n %d",c);
    //     a = b;
    //     b = c;
    //     i++;
    // } while (i<=15);

    // find factorial of 5
    // int fact=1,x=5;
    // do
    // {
    //  fact = x * fact;
    //  x = x-1;

    // } while(x>0);

    // printf("\n %d",fact);

    // print number 1 to 5 wit its Square

    // int num=1;
    // do
    // {
    //     printf("\n %d \t %d",num,(num*num));
    //     num++;
    // } while (num<=5);

    // print A to Z with its  ASCII value
    // char a = 'A';
    // do
    // {
    //     printf("\n %c \t %d", a, a);
    //     a++;
    // } while (a <= 'Z');

    // print the large digit from  given number

    // int a=0,r,x=898;

    // do
    // {
    //     r = x%10;

    //     x = x/10;
    // } while (x>0);

    // Find Even Number and its total from given number
    // int r,x,sum=0;
    // printf("\n Enter Any Number: ");
    // scanf("%d",&x);

    // do
    // {
    //     r = x%10;
    //     if (r%2==0)
    //     {
    //         printf("\n %d is EVEN",r);
    //         sum = sum + r;
    //     }

    //     x = x/10;
    // } while (x>0);

    // printf("\n %d",sum);

    //    WAP to cotinuity of loop
    int num, i, a = 0;
    char x;
    do
    {
        printf("\n Enter Any Number: ");
        scanf("%d", &num);

        i = 1;
        while (i <= 10)
        {
            printf("\n %d", (num * i));
            i++;
        }

        printf("\n You Want To Repeat This Operation: ");
        x = getch();
        printf("%c", x);

        if (x == 'y')
        {
            a++;
        }

    } while (a > 0);
}
