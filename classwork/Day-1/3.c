#include<stdio.h>
int* findToppers(int arr[],int n){
    int* max = &arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>*max)
        {
            *max = arr[i];
        }
        
    }
    return max;
    
}
int main(){
    int n = 5;
    int arr[5] = {10,20,50,40,30};
    int* c = findToppers(arr,n);
    printf("%d",*c);
    return 0;
}