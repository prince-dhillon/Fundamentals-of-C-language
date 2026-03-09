#include<stdio.h>
int main(){
    float basic , hra , da;
    scanf("%f",&basic);
    hra = basic/5;
    da = basic/10;
    float gross= basic + hra + da;
    if (gross>= 50000)
    {
        float tax = (gross*15)/100;
        printf("%.2f",gross+tax);
    }
    else
    {
        float tax = (gross*5)/100;
        printf("%.2f",gross+tax);
    }
    return 0;
}