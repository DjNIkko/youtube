#include<stdio.h>

struct book
{
    char name[100];
    char author[100];
    int pages;
};

void main(){
    
    struct book b1 ={"cs","dj",66};
    struct book *b;
    b = &b1;
    printf("\n%s\t%s\t%d",b->name,b->author,b->pages);

}