#include<stdio.h>

int main(){
    FILE* ptr = NULL;
    char str[100] = "Hello World";
    ptr = fopen("files.txt","w");
    fputc(str,ptr);
    return 0;
}