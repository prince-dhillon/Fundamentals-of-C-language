#include<stdio.h>

void find(int arr[], int n, int** min, int** max){
    * min = &arr[0];
    * max = &arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>**max)
        {
            *max = &arr[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<**min)
        {
            *min = &arr[i];
        }
        
    }
}
int main(){
    int n;
    int* min;
    int* max;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    find(arr,n,&min,&max);
    printf("MIN - %d\n",*min);
    printf("MAX - %d",*max);
    return 0;
}