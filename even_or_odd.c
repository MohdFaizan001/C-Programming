#include <stdio.h>
int main() {
    //code for checking number is even or odd
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The integer %d is even.\n", num);
    } else {
        printf("The integer %d is odd.\n", num);
        
    }
    return 0;
}
