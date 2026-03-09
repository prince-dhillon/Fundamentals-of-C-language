#include<stdio.h>

int main(){
    float m1,m2,m3,m4,m5,m6;
    scanf("%f %f",&m1,&m2);
    scanf("%f %f",&m3,&m4);
    scanf("%f %f",&m5,&m6);

    int avg_1 = m2-m1;
    int avg_2 = m4-m3;
    int avg_3 = m6-m5;

    if(avg_1 != 0){
        printf("%d ",avg_1);
        printf("No Need\n");
    }
    else{
        printf("%d ",avg_1);
        printf(" Need to refill\n");
    }
    if(avg_2 != 0){
        printf("%d ",avg_2);
        printf("No Need\n");
    }
    else{
        printf("%d ",avg_2);
        printf(" Need to refill\n");
    }
    if(avg_3 != 0){
        printf("%d ",avg_3);
        printf("No Need\n");
    }
    else{
        printf("%d ",avg_3);
        printf(" Need to refill");
    }
    return 0;
}