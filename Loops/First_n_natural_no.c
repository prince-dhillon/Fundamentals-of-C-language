// Write a program to print first ‘n’ natural numbers using for loop
#include<stdio.h>

int main(){
    int n,i;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i = n; i; i--){
        printf("%d\n",i);
    }
    return 0;
}