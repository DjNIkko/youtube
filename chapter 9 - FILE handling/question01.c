// WAP to count the number of characters,words,lines in the file specified
#include <stdio.h>
void main()
{

    char ch;
    int chr = 0, line = 0;
    FILE *fp;
    fp = fopen("a1.txt", "r");

    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
        if (ch != ' ')
        {
            chr++;
        }

        //you can also use 10 instead of '\n',because 10 is ASCII Code of Enter Button
        if (ch == '\n')
        {
            line++;
        }
    }
    printf("\nWord: %d", ftell(fp));
    printf("\nCharacters: %d", chr);//without space
    printf("\nLines: %d", line + 1);
}