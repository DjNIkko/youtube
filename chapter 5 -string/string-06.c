// Reverse the string

#include<stdio.h>
void main(){
    char str[100];
    int last;
    
    printf("\n Enter Any String: ");
    scanf("%s",str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        last = i;
    }
    
    for (int i = last; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    

}