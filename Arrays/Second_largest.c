#include<stdio.h>
#include<limits.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int max = INT_MIN;
    int smax = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for (int j = 0; j< n; j++)
    {
        if(arr[j]>smax && arr[j]!=max){
            smax = arr[j];
        }
    }
    
    printf("The Second maximum number is: %d",smax);
    return 0;
}