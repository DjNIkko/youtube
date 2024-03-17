#include<stdio.h>
#include<conio.h>
void main (){
    int fourDigitNum,first,last,sum;

    printf("Enter four digit Number: ");
    scanf("%d",&fourDigitNum);

    first=fourDigitNum/1000;
    last=fourDigitNum%10;

    sum=first+last;

    printf("sum of first and last number is: %d",sum);

}

