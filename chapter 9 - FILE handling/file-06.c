//print data from stucture 
#include<stdio.h>
#include<conio.h>
void main(){

    FILE *fp;
    char name[5],author[10];
    int price;
    fp = fopen("books.txt","r");

    //print
    printf("\nYour Data: \n");
    while (fscanf(fp,"%s%s%d",name,author,&price)!=EOF)
    {
        printf("\n%s\t%s\t%d",name,author,price);
    }
    
    fclose(fp);
}