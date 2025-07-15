#include<stdio.h>
/* Displaying pattern: ****
                       ***
                       **
                       *          */
int main(){
    int n;  // n is no. of lines

    printf("Enter the number:");
    scanf("%d",&n);

    for (int i = n; i > 0 ; i--)
    {
       for (int j = 1; j <= i; j++)
       {
        printf("*");
       }
       printf("\n");
       
    }
    
    return 0;
}