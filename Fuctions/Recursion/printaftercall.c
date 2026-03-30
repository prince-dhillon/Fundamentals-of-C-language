#include<stdio.h>
void func(int x,int n){
    if (x>n) return;
    else
    {
        func(x+1,n);
        printf("%d ",x);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    func(1,n);
    return 0;
}