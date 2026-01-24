#include<stdio.h>
int fac(int);

int fac(int x){
    if(x == 1 || x==0){
        return 1;
    }
    else
    {
        return x*fac(x-1);
    }
    
}
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    int c = fac(n);
    printf("Factorial of %d is %d",n,c);
    return 0;
}