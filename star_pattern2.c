#include<stdio.h>
/* Displaying pattern :**
                       ***
                       **** 
                       *****    */
int main(){
    int n;  // n is no. of lines

    printf("Enter the number:");
    scanf("%d",&n);

    for (int i = 0; i < n ; i++)
    {
       for (int j = 0; j <= i+1 ; j++)
       {
        printf("*");
       }
       printf("\n");
       
    }
    
    return 0;
}