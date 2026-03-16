#include<stdio.h>
int reverse(int n, int rev){
    if (n==0)
    {
        return rev;
    }
    else
    {
        return reverse(n/10,rev*10 + (n%10));

    }
    
    
}
int main(){
    int n;
    scanf("%d",&n);
    int c = reverse(n,0);
    printf("%d",c);
    return 0;
}