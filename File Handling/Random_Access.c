#include<stdio.h>

int main(){
    FILE* ptr = fopen("file.txt","r");
    char arr[40];
    fscanf(ptr,"%s",arr);
    while (fscanf(ptr,"%s",arr)!=EOF)
    {
        printf("%s\n",arr);
    }
    rewind(ptr);
        while (fscanf(ptr,"%s",arr)!=EOF)
    {
        printf("%s",arr);
    }
    return 0;
}