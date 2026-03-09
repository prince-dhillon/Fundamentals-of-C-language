#include<stdio.h>
int main(){
    #include <stdio.h>
/* Include other headers as needed */
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1 ; i<=n; i++){
        for(int j=i ; j<=n-1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1 ; i<=n; i++){
        for(int j=1 ; j<=i+1; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
}
    return 0;
}