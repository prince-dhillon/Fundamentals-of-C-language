#include<stdio.h>
void func(int n){
    if (n==1) printf("1");
    else
    {
        printf("%d ",n);
        func(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    func(n);
    return 0;
}