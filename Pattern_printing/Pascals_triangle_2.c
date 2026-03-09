#include<stdio.h>

int main(){
    int x;
    printf("Enter No of rows: ");
    scanf("%d",&x);

    for(int i = 0; i < x; i++){
        
        int val = 1;

        for(int space = i; space < x; space++){
            printf(" ");
        }

        for(int j = 0; j <= i; j++){
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}