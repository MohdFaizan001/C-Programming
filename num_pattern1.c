#include<stdio.h>
/* Displaying pattern :1
                       1 2
                       1 2 3
                       1 2 3 4*/
int main(){
int n ; // n is total number of lines

printf("Enter the number of lines n :");
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
   for (int j = 1;j <= i; j++)
   {
    printf("%d ", j);
   }
   printf("\n");
}

    return 0;
}