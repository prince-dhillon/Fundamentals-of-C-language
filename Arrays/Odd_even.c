// Given an array of intergers, Change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
#include<stdio.h>
void func(int x[], int n){
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            x[i] += 10;
        }
        else
        {
            x[i] *= 2;
        }
        
        
    }
    
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    func(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}