#include<stdio.h>

int main(){
    int n,i,flag;
    flag = 0;
    printf("Enter Number: ");
    scanf("%d",&n);
    if (n == 1 || n == 0){
        printf("Not a Prime Number !");
    }
    else{
        for(i=2; i<n; i++){
            if(n%i == 0){
                flag = 1;
                break;
            }
        }
        if(flag){
            printf("Not a Prime Number !");
        }
        else{
            printf("Prime Number !");
        }
}
    return 0;
}