#include<stdio.h>

int main(){
    int i, n , sum = 0;
    printf("Enter the number n: ");
    scanf("%d", &n);
    printf("The sum of the series of first %d natural numbers is:", n);
    for (i = 1; i<= n; i++)
    {
        sum +=i; //adding the next number to sum
    }
    printf("%d\n",sum);
    return 0;
}