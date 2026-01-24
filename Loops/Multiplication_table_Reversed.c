// Write a program to print multiplication table of 10 in reversed order.
#include<stdio.h>

int main(){
    int n,i;
    n = 10;
    for(i=10; i; i--){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}