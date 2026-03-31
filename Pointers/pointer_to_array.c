#include<stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};

    int (*p)[5] = &arr;

    printf("%d\n", (*p)[0]); // 1
    printf("%d\n", (*p)[1]); // 2

    return 0;
}