#include <stdio.h>
int main() {
    /*to display Salaam when user enters 1, Aadaab when user enters 2, Hello when user enters 3 
    and invalid number when user enters any other number*/
    int num;
printf("Enter a number (1, 2, or 3): ");
    scanf("%d", &num);
    switch (num) {
        case 1:
            printf("Salaam\n");
            break;
        case 2:
            printf("Aadaab\n");
            break;
        case 3:
            printf("Hello\n");
            break;
        default:
            printf("Incorrect Option\n");
            break;
    }

    return 0;
}
