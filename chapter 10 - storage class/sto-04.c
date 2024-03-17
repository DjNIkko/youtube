#include<stdio.h>
int x=10;
void main(){
    extern int x,y;

    printf("\nx=%d y=%d",x,y);

    data();


}
int y=20;

data(){
    
    printf("\nx=%d y=%d",x,y);
}