//use of user defined function [void function]
#include<stdio.h>

void printline(void);

void main(){
    printline();
    printf("Nikhat D. Koli");
    printf("\nMob.9325054754\n");
    printline();

}
void printline(void){
    for (int i = 0; i < 20; i++)
    {
        printf("*");
    }
    printf("\n");
}