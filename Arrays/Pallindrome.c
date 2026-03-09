#include<stdio.h>
void rev(int x[],int y[],int n){
    for (int i = 0; i < n; i++)
    {
        y[i] = x[n-i-1];
    }
}
int main(){
    int arr[] = {1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int brr[n];
    int equal = 1;
    rev(arr,brr,n);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=brr[i]){
            equal = 0;
            break;
        }
    }
    
    if (equal)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    
    
    return 0;
}