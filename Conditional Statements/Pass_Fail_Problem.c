// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.
#include<stdio.h>

int main(){
    float m1,m2,m3;
    printf("Enter Marks Seperated By Spaces: ");
    scanf("%f %f %f",&m1,&m2,&m3);
    if(((m1+m2+m3)/3)>=40){
        if(m1 >= 33 && m2>= 33 && m3>= 33){
            printf("Student has Passed the exam !");
        }
        else{
        printf("Student has Failed the exam !");
    }

    }
    else{
        printf("Student has Failed the exam !");
    }
    return 0;
}