#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the Number: ");
    scanf("%d",&n);
    do{
        printf("This is iteration number: %d\n", i);
        i++;
    }
    while(i<=n);
    return 0;
}