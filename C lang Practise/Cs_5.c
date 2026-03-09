#include<stdio.h>

int main(){
    int d1,d2,d3;
    scanf("%d %d %d",&d1,&d2,&d3);
    int total = (d1+d2+d3)*24;
    if (total>300){
        printf("%d\n",total);
        printf("High Usage");

    }
    else if (total>=60 && total<70){
        printf("%d\n",total);
        printf("Moderate Usage");
    }
    else if (total<150){
        printf("%d\n",total);
        printf("Low Usage");
    }
    else{
        printf("Invalid Input");
    }
    
    return 0;
}