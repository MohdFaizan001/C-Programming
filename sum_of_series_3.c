#include<stdio.h>
//Displsying the sum of series : 1 + 1/2 + 1/4 + 1/6 +......1/n
int main(){
    int n, i, sum = 1;
    printf(" Enter the number n :");
    scanf("%d",&n);

    for ( i = 1; i <= n; n++)
    {
       if (n % 2 == 0){
        sum = sum + 1/n;
       }
    

    }
    printf("The sum of series : %d",sum);
    
    return 0;
}