// Write a program to calculate the factorial of a given number using a for loop.
#include<stdio.h>

int main(){
    int n,i,fac=1;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=n; i; i--){
        fac *= i;
    }
    printf("The factorial of %d is %d",n,fac);
    return 0;
}