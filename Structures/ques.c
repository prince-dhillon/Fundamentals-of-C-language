#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer
    {
        char name[30];
        int age;
        int matches;
    }player;
    player arr[2];
    strcpy(arr[0].name,"Sachin");
    arr[0].age = 40;
    arr[0].matches = 400;

    strcpy(arr[1].name,"Prince");
    arr[1].age = 20;
    arr[1].matches = 4000;

    for (int i = 0; i < 2; i++)
    {
        printf("Name: %s\n",arr[i].name);
        printf("Age: %d\n",arr[i].age);
        printf("Matches Played: %d\n",arr[i].matches);
    }
    
    return 0;
}