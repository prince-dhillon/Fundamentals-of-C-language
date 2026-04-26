#include<stdio.h>

int main(){
    char str[30];
    FILE *ptr = NULL;
    ptr = fopen("file.txt","r");
    fscanf(ptr,"%s",str);
    printf("%s",str);
    fclose(ptr);
    return 0;
}