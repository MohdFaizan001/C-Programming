#include<stdio.h>
//Displaying the series : 2 4 8 16 32 64.... n terms
int main(){
int n ,r = 2 , a = 2 ; // a is first term of Gp series and r is common ratio

printf("Enter the number :\n");
scanf("%d",&n);

for (int i = 1; i <= n; i++)
{
   printf("%d ",a);
   a = a*r;
  
}

    return 0;
}