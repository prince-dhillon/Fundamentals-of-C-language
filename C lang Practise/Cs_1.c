#include<stdio.h>

int main(){
    int exp, ps;
    scanf("%d %d",&ps,&exp);
    if (exp>=0 && ps>=0)
    {
        if(exp>=3 && ps>=70){
        printf("Eligible for Bonus");
    }
        else{
        printf("Not Eligible for Bonus");
    }
    }
    else{
        printf("Wrong Input");
    }
    
    return 0;
}