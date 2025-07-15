#include<stdio.h>
// Displaying the series : 1 2 2 3 3 3 4 4 4 4 .... upto n 
int main(){

    int n;
    printf("Enter the number n :");
    scanf("%d",&n);

    printf("The series is : ");

    for (int i = 1; i <= n; i++)
    {
       for (int j = 1; j <= i ; j++)
       {
              printf("%d ", i);
       }
       
    }
    
    return 0;
}