//file handling with structure 
#include<stdio.h>
struct book
{
    char name[5];
    char author[10];
    int price;
};

void main(){
    

    //adding data in structure
    struct book b1={"c++","dj",120};

    FILE *fp;
    fp=fopen("books.txt","a");

    //adding in file
    fprintf(fp,"\n%s\t%s\t%d",b1.name,b1.author,b1.price);

    fclose(fp);



    //printing data
    //  fp = fopen("books.txt","r");

    // //print
    // printf("\nYour Data: \n");
    // while (fscanf(fp,"%s%s%d",b1.name,b1.author,&b1.price)!=EOF)
    // {
    //     printf("\n%s\t%s\t%d",b1.name,b1.author,b1.price);
    // }
    
    // fclose(fp);

}
