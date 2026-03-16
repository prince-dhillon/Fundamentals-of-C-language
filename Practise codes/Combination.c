#include<stdio.h>
int fac(int);
int fac(int n){
    int fact = 1;
    if (n==0 || n==1)
    {
        return 1;
    }
    else{
        for (int i = 2; i <= n; i++)
        {
            fact*=i;
        }
        
    }
    return fact;
    
}
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    int comb = fac(n)/(fac(n-r)*fac(r));
    printf("%d",comb);
    return 0;
}