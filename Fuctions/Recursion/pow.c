#include<stdio.h>
int power(int b, int p){
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return b*power(b,p-1);
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