#include<stdio.h>
// Displaying the series : 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5....... n times
int main(){

    int n;
    printf("Enter the number n :");
    scanf("%d",&n);

    printf("The series is : ");

    for (int i = 1; i <= n; i++)
    {
       for (int j = 1; j <= 5 ; j++)
       {
              printf("%d ", j);
       }
       
    }
    
    return 0;
}