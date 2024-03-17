// enumeration
#include <stdio.h>
void main()
{
    enum gender{male,female};
    int choice;

    printf("\nEnter Gender 0=male,1=female : ");
    scanf("%d",&choice);

    if (choice==male)
    {
        printf("\nMale");
    }
    else
    {
        printf("\nfemale");
        
    }
    
    
}