#include<stdio.h>

int main(){
int  i , n = 100;
for ( i = 0; i <= n; i++)
{
    if (i % 2 == 0) // check if the number is even
    {
        printf("%d ",i);
    }
    // we can skip the below lines of code
    else
    {
        continue; // skip odd numbers
    }

    
}

    return 0;
}