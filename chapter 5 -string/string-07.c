#include<stdio.h>
#include<conio.h>
void main(){
    char str[]= "jyoti",str1[]="";
    
    for (int i = 0; str[i]!='\0'; i++)
    {
        str1[i] = str[i];
    }

    //print
    for (int i = 0; str1[i]!='\0'; i++)
    {
        printf("%c",str1[i]);
    }
    
    


    
}