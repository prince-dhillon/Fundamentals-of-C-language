#include<stdio.h>
int power(int m,int n){
    if (m==0)
    {
        return 0;
    }
    else if (n==0)
    {
        return 1;
    }
    else{
        return m*power(m,n-1);
    }
    
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int c = power(m,n);
    printf("%d",c);
    return 0;
}