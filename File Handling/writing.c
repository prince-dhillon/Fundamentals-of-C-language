#include<stdio.h>

int main(){
    char str[30] = "Hello World !";
    FILE *ptr = NULL;
    ptr = fopen("file copy.txt","w");
    fprintf(ptr,"%s",str);
    fclose(ptr);
    return 0;
}