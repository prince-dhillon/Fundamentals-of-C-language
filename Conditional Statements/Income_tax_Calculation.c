#include<stdio.h>

int main(){
    float n,tax;
    printf("Enter your Income in Lakhs: ");
    scanf("%f",&n);
    if(n>=0 && n<=2.5)
        printf("Tax Amount: ₹0");
    else{
        if(n>=5 && n<=10){
            tax = n/20;
            printf("Tax Amount: %.2f",tax*100000);
        }
        else{
            tax = 0.3*n;
            printf("Tax amount: %.2f",tax*100000);
        }
    }
    return 0;
}