// Write a program to print the value of a variable i by using “pointer to pointer” type of variable.
#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i;
    int** k = &j;
    printf("The Address of i is %p\n",*k);
    printf("The Value of i is %d",**k);
    return 0;
}