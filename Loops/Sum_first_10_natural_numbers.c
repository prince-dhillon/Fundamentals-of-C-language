// Write a program to sum first ten natural numbers using while loop.
#include<stdio.h>

int main(){
    int n = 10;
    int s = 0;
    while(n){
        s+=n;
        n--;
    }
    printf("The Sum of First Ten Natural Number is : %d",s);
    return 0;
}