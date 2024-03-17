#include <stdio.h>
void main()
{
    // count no. of vowels in given string      vowels=a,e,i,o,u;

    char str[] = "Jay Hindurashtra", vowel[] = "AEIOUaeiou";
    int count=0;

    for (int i = 0; str[i]!='\0'; i++)
    {

        for (int j = 0; vowel[j]!='\0'; j++)
        {
            if (str[i] == vowel[j])
            {
                count = count + 1;
            }
        }
    }

    printf("\n count is: %d",count);
}