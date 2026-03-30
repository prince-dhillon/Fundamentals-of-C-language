#include<stdio.h>
int stair(int n){
    if (n<=2) return n;
    else
    {
        return stair(n-1) + stair(n-2) + stair(n-3);
    }
    
    
}
int main(){
    int n;
    printf("Enter stair number: ");
    scanf("%d",&n);
    printf("%d",stair(n));
    return 0;
}