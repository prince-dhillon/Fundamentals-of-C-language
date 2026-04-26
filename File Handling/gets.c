#include<stdio.h>

int main(){
    FILE* ptr = fopen("file.txt","r");
    char str[30];
    fgets(str,29,ptr);
    printf("%s",str);
    return 0;
}