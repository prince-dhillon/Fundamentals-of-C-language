#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
        if(n>50){
        printf("Green");
        }
        else if(n>20 && n<=50){
        printf("Yellow");
        }
        else if(n>=0 && n<=20){
            printf("Red");
        }
        else{
            printf("Not Valid");
        }
    return 0;
}
