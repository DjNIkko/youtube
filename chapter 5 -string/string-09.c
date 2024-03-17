#include<stdio.h>
#include<string.h>
void main(){

    // find out whether the string is palindrome or not

    char str[100],rev[100];

    printf("\n enter string: ");
    scanf("%s",str);

    strcpy(rev,str);
    strrev(rev);

    if (strcmp(str,rev) == 0)
    {
        printf("\n palindrome");
    }
    else
    {
        printf("\n not palindrome");
    }
    
    
    
      
}