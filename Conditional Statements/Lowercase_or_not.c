// Write a program to determine whether a character entered by the user is
// lowercase or not.
#include<stdio.h>

int main(){
    char c;
    int l;
    printf("Enter the character: ");
    scanf("%c",&c);
    l = (int)c;
    if(l>=97 && l<=122){
        printf("The Character is in Lowercase");
    }
    else{
        printf("The character is in Uppercase");
    }
    return 0;
}