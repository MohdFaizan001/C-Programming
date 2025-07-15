#include<stdio.h>

int main(){
int arr []={ 10 , 20 , 30 , 40 , 50};
int n = sizeof(arr[0]);
printf("The elements of array are : \n");
for (int i= 0; i<=n ; i++){
    printf("%d\n", arr[i]);

}
    return 0;
}