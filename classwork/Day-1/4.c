#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int mul(int a, int b){
    return a*b;
}
int main(){
    int arr[3];
    int c = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&arr[i]);
    }
    if (arr[2]==1)
    {
        c = add(arr[0],arr[1]);
    }
    else
    {
        c = mul(arr[0],arr[1]);
    }
    printf("%d",c);
    return 0;
}