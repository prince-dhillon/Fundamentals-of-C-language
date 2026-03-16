#include<stdio.h>
#include<math.h>
float compound(float p, float r, float t){
    float c = p*(pow(1+r/100,t))- p;
    return c;
}
int main(){
    int p,r,t;
    scanf("%d",&p);
    scanf("%d",&r);
    scanf("%d",&t);
    float c = compound(p,r,t);
    printf("%.2f",c);
    return 0;
}