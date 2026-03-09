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
int comb(int,int);
int comb(int n,int r){
    int comb = fac(n)/(fac(n-r)*fac(r));
    return comb;
}
int main(){
    int x,n,r;
    printf("Enter No of rows: ");
    scanf("%d",&x);

    for(int i=0; i<x; i++){
        for (int j = i; j < x; j++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < i+1; j++)
        {
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
    return 0;
}