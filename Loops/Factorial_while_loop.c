// Write a program to calculate the factorial of a given number using a while loop.
#include<stdio.h>

int main(){
    int n,temp,fac=1;
    printf("Enter Number: ");
    scanf("%d",&n);
    temp = n;
    while(temp){
        fac *= temp;
        temp--;
    }
    printf("The factorial of %d is %d",n,fac);
    return 0;
}