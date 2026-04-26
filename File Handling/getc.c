#include<stdio.h>

int main(){
    FILE* ptr = fopen("file.txt","r");
    char k = fgetc(ptr);
    printf("%c", k);
    return 0;
}