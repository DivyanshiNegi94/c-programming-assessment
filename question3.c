#include <stdio.h>
int main() {
    int n, i, j, isPrime;
     printf("enter a number:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid\n");
        return 1;
    }
    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d\n", i);
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
     return 0;
}