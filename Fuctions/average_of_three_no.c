// Write a program using function to find average of three numbers.
#include<stdio.h>
float avg(float,float,float);

float avg(float a,float b,float c){
    float average = (a+b+c)/3;
    return (a+b+c)/3;
}
int main(){
    float x,y,z;
    printf("Enter Numbers Space Seperated: ");
    scanf("%f %f %f",&x,&y,&z);
    float c = avg(x,y,z);
    printf("The average is : %.2f",c);
    return 0;
}