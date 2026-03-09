#include<stdio.h>
#include<limits.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN, smax = INT_MIN;

    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            smax = max;   // old max becomes second max
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max){
            smax = arr[i];
        }
    }

    printf("The Second maximum number is: %d\n", smax);
    return 0;
}