#include<stdio.h>
void sum(int arr[],int n){
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s+=arr[i];
    }
    printf("%d",s);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sum(arr,n);
    return 0;
}