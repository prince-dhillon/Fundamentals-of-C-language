#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>5000)
    {
        printf("20%%\n%d",n-((n*20)/100));
    }
    else if(n>=2000 && n<= 5000)
    {
        printf("10%%\n%d",n-((n*10)/100));
    }
    else
    {
        printf("0%%\n0");
    }
    return 0;
}