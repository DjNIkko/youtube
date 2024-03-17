#include<stdio.h>
display(int *,int);
void main(){
    int arr[5]={10,20,30,40,50};
    
    display(&arr[0],5);
}

display(int *p,int k){
    for (int i = 0; i < k; i++)
    {
        printf("\n %d",*p);
        p++;
    }
    
}