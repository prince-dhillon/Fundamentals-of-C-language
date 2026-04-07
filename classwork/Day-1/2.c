#include<stdio.h>

void addInterest(float *balance){
    *balance = (*balance)*1.05;
    printf("%.1f",*balance);
}
int main(){
    float balance = 2000;
    addInterest(&balance);
    return 0;
}