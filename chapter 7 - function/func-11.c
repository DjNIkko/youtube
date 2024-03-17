//function with array
#include<stdio.h>
void fn(int);

void main(){

    int arr[]={1,2,3,4,5};

    for (int i = 0; i < 5; i++)
    {
        fn(arr[i]);
    }
    
}

void fn(int arr){

    printf("\n%d",arr);
}