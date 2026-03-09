// Find the maximum number in an array.
#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6};
    int max = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("The maximum number is: %d\n",max);
    return 0;
}