// Write a program to change the value of a variable to ten times of its current value.
#include<stdio.h>
int ten_times(int*);

int ten_times(int* j){
    return (*j)*10;
}

int main(){
    int i;
    i = 97;
    int c = ten_times(&i);
    printf("The Answer is: %d",c);
    return 0;
}