#include<stdio.h>
float calculate_average(int marks[], int n){
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        s+=marks[i];
    }
    float avg = s/n;
    return avg;
    
}

char grade(float avg){
    if (avg>=80 && avg<100)
    {
        return 'A';
    }
    else if (avg>=70 && avg<80)
    {
        return 'B';
    }
    else if(avg>=60 && avg<70)
    {
        return 'C';
    }
    else if (avg>=50 && avg<60)
    {
        return 'E';
    }
    else if (avg>=40 && avg<50)
    {
        return 'E';
    }
    else{
        return 'F';
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&marks[i]);
    }
    float avg;
    char gr;
    avg = calculate_average(marks,n);
    gr = grade(avg);
    printf("%.2f\n",avg);
    printf("%c",gr);
    return 0;
}