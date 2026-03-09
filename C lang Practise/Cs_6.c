#include<stdio.h>

int main(){
    float m1,m2,m3,m4;
    scanf("%f %f %f %f",&m1,&m2,&m3,&m4);
    float avg = (m1+m2+m3+m4)/4;
    printf("%.2f\n",avg);
    if (avg>500){
        printf("Excellent");
    }
    else if (avg>300 && avg<=500){
        printf("Good");
    }
    else if (avg>=300){
        printf("Need Improvement");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}