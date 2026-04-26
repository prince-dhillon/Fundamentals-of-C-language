#include<stdio.h>

int main(){
    FILE* ptr = fopen("read_write.txt","wb");
    int arr[] = {22,23,24,25,26};
    int brr[5] = {0};
    fwrite(arr,sizeof(int),5,ptr);
    fclose(ptr);

    ptr = fopen("read_write.txt","rb");
    fread(brr,4,5,ptr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d-%d\n",arr[i],brr[i]);
    }
    
    return 0;
}