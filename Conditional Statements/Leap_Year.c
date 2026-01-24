// Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.
#include<stdio.h>

int main(){
    int n;
    printf("Enter Year: ");
    scanf("%d",&n);
    if((n%4 ==0 && n%100 != 0) || (n%400 == 0)){
        printf("Leap Year !");
    }
    else{
        printf("Not a Leap Year !");
    }
    return 0;
}