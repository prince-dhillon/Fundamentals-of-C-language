// Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().
#include<stdio.h>
int sum(int*,int*);
int sum(int* x,int* y){
    return *x + *y;
}
float avg(int*,int*);
float avg(int* x,int* y){
    return (*x + *y)/2.0;
}

int main(){
    int i=10,j=20;
    int s = sum(&i,&j);
    float a = avg(&i,&j);
    printf("The Sum is: %d\n",s);
    printf("The Average is: %.2f",a);
    return 0;
}