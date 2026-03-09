// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7, and 9 respectively.
#include<stdio.h>

int main(){
    int arr[3][10];
    for(int j=0; j<10; j++){
        arr[0][j] = 2*(j+1);
        arr[1][j] = 7*(j+1);
        arr[2][j] = 9*(j+1);
        }
    for(int k=0; k<3; k++){
        for(int l=0; l<10; l++){
            printf("%d\n",arr[k][l]);
    }
    printf("\n");
}        
    return 0;
}