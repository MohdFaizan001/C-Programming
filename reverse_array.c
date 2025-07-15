#include<stdio.h>

int main(){
int arr[100], n;
printf("enter the numbers of elements:\n");
scanf("%d",&n);

printf(" Enter the %d integers :\n",n);
for (int i = 0; i < n; i++){
scanf("%d",&arr[i]);
}
printf("Element of array in reverse are :\n");
for (int i = n-1 ; i >= 0; i--)
{
printf("%d\n",arr [i]);

}


    return 0;

}