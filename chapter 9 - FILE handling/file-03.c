// writw in File "input.txt" and show it's data.
#include <stdio.h>
void main()
{
    char ch;
    FILE *fp;
    // file open
    fp = fopen("input.txt", "w");

    // get data
    printf("Enter Data: ");
    while ((ch = getchar()) != EOF)
    {
        putc(ch, fp);
    }
    // file close
    fclose(fp);

    // show data
    // file open
    fp = fopen("input.txt", "r");
    printf("Your Data: \n");
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    // file close
    fclose(fp);
}