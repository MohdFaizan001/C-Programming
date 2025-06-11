#include<stdio.h>

int main(){
int  i , n;
printf("Enter the number n : ");
scanf("%d",&n);
printf("The reverse series of n natural number :");
for ( i = n; i > 0 ; i--)
{
   
    printf("%d ",i);
}

    return 0;
}