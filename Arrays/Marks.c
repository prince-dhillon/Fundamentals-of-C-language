// Given marks of the students, if marks of any student is less than 35 then print its rollno(index).
#include<stdio.h>

int main(){
    float arr[] = {50,34,100,19,56,78,90};
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]<35)
        {
            printf("%d ",i);
        }
        
    }
    printf("%f",arr);

    return 0;
}