#include<stdio.h>

int main(){
    int i, n , product = 1;
    printf("Enter the number n: ");
    scanf("%d", &n);
    printf("The product of the series of first %d natural numbers is:", n);
    for (i = 1; i<= n; i++)
    {
        product *=i; //multipling the next number to sum
    }
    printf("%d\n",product);
    return 0;
}