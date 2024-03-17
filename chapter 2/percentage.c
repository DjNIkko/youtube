

//WAP t calculate the total&percentage of 3 subjects marks, 7 also find the students result, grade wise

#include<stdio.h>
#include<conio.h>
void main(){
    float math,marathi,sanskrit,total,per;

    // get input
    printf("Enter math subjecct marks: ");
    scanf("%f",&math);
    printf("Enter Marathi subject marks: ");
    scanf("%f",&marathi);
    printf("Enter Sanskrit subject marks: ");
    scanf("%f",&sanskrit);

    // perfom operations
    total = math+marathi+sanskrit;
    per = (total/300)*100;

    // result
    printf("\ntotal marks is: %f",total);
    printf("\npercentage is: %f",per);

    if(per >= 40 && per < 60){
        printf("\nYour Pass with D grade");
    }
    if(per >= 60 && per < 75){
        printf("\nYour Pass with C grade");
    }
    if(per >= 75 && per < 90){
        printf("\nYour Pass with B grade");
    }
    if(per >= 90 && per <= 100){
        printf("\nYour Pass with A grade");
    }

}

