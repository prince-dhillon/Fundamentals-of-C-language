#include<stdio.h>

int main() {
    int a=1, b=2, c=3, d=4, e=5;

    int *p[5] = {&a, &b, &c, &d, &e};

    printf("%d\n", *p[0]); // 1
    printf("%d\n", *p[1]); // 2

    return 0;
}