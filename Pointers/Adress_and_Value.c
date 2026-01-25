// Write a program to print the address of a variable. Use this address to get the value of the variable.
#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i;
    printf("The Address of i is %p\n",j);
    printf("The Value of i is %d",*j);
    return 0;
}