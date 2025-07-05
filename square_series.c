#include<stdio.h>
//Displaying the series : 2 4 16 256 65536.... n terms
int main(){
int n  , a = 2 ; // a is first term of  series 

printf("Enter the number :\n");
scanf("%d",&n);

for (int i = 1; i <= n; i++)
{
   printf("%d ",a);
   a = a*a;
  
}

    return 0;
}