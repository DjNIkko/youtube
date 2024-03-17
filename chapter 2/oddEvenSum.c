#include<stdio.h>
void main(){
    int arr[10],i=0,sum1=0,sum2=0;

    printf("\nEnter Values: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]%2==0)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2=sum2+arr[i];
        }
        
        
    }
    printf("\nSumOfEven: %d\nSumOfOdd: %d",sum1,sum2);
}