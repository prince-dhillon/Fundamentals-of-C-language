#include<stdio.h>

int main(){
    float m1,m2,m3,m4,m5;
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    float percentage = (m1+m2+m3+m4+m5)/5;
    if (percentage>=85){
        printf("%.3f%%\n",percentage);
        printf("A");

    }
    else if (percentage>=70 && percentage<=85){
        printf("%.3f%%\n",percentage);
        printf("B");
    }
    else if (percentage>=60 && percentage<70){
        printf("%.3f%%\n",percentage);
        printf("C");
    }
    else if (percentage>=50 && percentage<60){
        printf("%.3f%%\n",percentage);
        printf("D");
    }
    else if (percentage>40 && percentage<50){
        printf("%.3f%%\n",percentage);
        printf("E");
    }
    else{
        printf("%.3f%%\n",percentage);
        printf("F");
    }
    
    return 0;
}