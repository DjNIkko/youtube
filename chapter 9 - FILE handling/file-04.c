//write 1 to 10 numbers and show them
#include<stdio.h>
void main(){
    int num;
    FILE *fp;
    //open file
    fp = fopen("num.txt","w");

    //fill data in file
    for (int num = 1; num <= 10; num++)
    {
        putw(num,fp);
    }
    //close file
    fclose(fp);

    //show data
    // open file
    fp=fopen("num.txt","r");
    printf("\n Your Data: ");
    while ((num=getw(fp))!=EOF)
    {
        printf("\n %d",num);
    }
    //close file
    fclose(fp);
    

    
}