#include<stdio.h>
int positive(int arr[],int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            count ++;
        }
    }
    return count;
}
int main(){
    int arr[] = {-1,2,-3,7,-9,8};
    int c = positive(arr,6);
    printf("The number of positive integers are: %d",c);
    return 0;
}