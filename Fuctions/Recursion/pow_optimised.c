#include<stdio.h>
int power(int b, int p){
    if (p == 0)
    {
        return 1;
    }

    int x = power(b,p/2);

    if (p%2==0)
    {
        return x*x;
    }
    else
    {
        return b * x * x;
    }
    
}
int main(){
    int b,p;
    printf("Enter the base: ");
    scanf("%d",&b);
    printf("Enter the power: ");
    scanf("%d",&p);
    printf("%d",power(b,p));
    return 0;
}