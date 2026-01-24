#include<stdio.h>
int s= 0;
int sum(int);

int sum(int x){
    if(x){
        s+=x;
        return sum(x-1);
    }
    else{
        return s;
    }

}
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    int c = sum(n);
    printf("Sum of first %d is %d",n,c);
    return 0;
}