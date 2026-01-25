#include<stdio.h>
int fib(int);

int fib(int x){
    if(x == 1 || x==2){
        return 1;
    }
    else if(x==0){
        return 0;
    }
    else
    {
        return fib(x-1) + fib(x-2);
    }
    
}
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    int c = fib(n);
    printf("Factorial of %d is %d",n,c);
    return 0;
}
