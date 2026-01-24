#include<stdio.h>

int sum(int x) {
    if (x == 0) {
        return 0;
    }
    return x + sum(x - 1);
}

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("Sum of first %d is %d", n, sum(n));
    return 0;
}
