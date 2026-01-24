// Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).
#include<stdio.h>

int main(){
    int n,i;
    int s = 0;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(i=1; i<=10; i++){
        s+=(n*i);
    }
    printf("Sum of Numbers: %d",s);
    return 0;
}