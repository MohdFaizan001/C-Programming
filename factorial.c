#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial not defined for negative numbers.\n");
    else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial = %llu\n", factorial);
    }
    return 0;
}
