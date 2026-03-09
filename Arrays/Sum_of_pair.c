// Find the total number of distinct pairs in an array whose sum is equal to a given number
#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int count = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = 12;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j] == num)
            {
                count ++;
            }
            
        }
        
    }
    printf("%d",count);
    return 0;
}