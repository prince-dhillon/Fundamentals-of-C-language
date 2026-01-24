#include<stdio.h>
void good_morning();
void good_evening();

void good_morning(){
    printf("Good Morning Everyone\n");
}
void good_evening(){
    printf("Good Evening Everyone");
}
int main(){
    good_morning();
    good_evening();
    return 0;
}