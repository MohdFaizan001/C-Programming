#include<stdio.h>

int main(){
int arr[100], n;
printf("enter the numbers of elements:\n");
scanf("%d",&n);

printf(" Enter the %d integers :\n",n);
for (int i = 0; i < n; i++){
scanf("%d\n",&arr[i]);
}
printf("Elements of array are :\n");
for (int i = 0; i < n; i++)
{
printf("%d\n",arr [i]);

}


    return 0;

}