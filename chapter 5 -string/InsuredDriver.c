#include <stdio.h>
#include <conio.h>

void main()
{
    int age;
    char ms, sex;

    printf("\nEnter Your Martial Status: ");
    ms = getch();
    printf("%c",ms);

    if (ms == 'm')
    {
        printf("\nYou Are Insured.");
    }
    else
    {

        printf("\nEnter Your Age: ");
        scanf("%d",&age);
        printf("\nEnter Your Gender: ");
        sex = getch();
        printf("%c",sex);
        
        if (sex == 'm')
        {
            
        if (age >= 30)
        {
            printf("\nYou Are Insured.");
        }
        else
        {
            printf("\nYou Are Not Insured.");
  
        }
        }
        else
        {
    
        if (age >= 25)
        {
            printf("\nYou Are Insured");
        }
        else
        {
            printf("\nYou Are Not Insured.");
            
        }
        }
        
        
        
            
        
    }
    // getch();
}