// Write a function to calculate force of attraction on a body of mass ‘m’ exerted byearth. Consider g = 9.8m/s2.
#include<stdio.h>
float force(float);

float force(float m){
    return m*9.8;
}

int main(){
    float x;
    printf("Enter Mass of Object: ");
    scanf("%f",&x);
    float f = force(x);
    printf("The force acting upon object is: %.2f",f);
    return 0;
}