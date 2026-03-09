#include<stdio.h>
float conversion(float);

float conversion(float x){
    return ((9.0/5)*x) + 32;
}

int main(){
    float x;
    printf("Enter value in Celcius: ");
    scanf("%f",&x);
    float c = conversion(x);
    printf("The Fahrenheit value is: %.2f",c);
    return 0;
}