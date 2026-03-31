#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int (*ptr) (int,int);
    ptr = &add;
    int d = (*ptr) (1,2);
    printf("%d",d);
    return 0;
}