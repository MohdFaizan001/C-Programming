#include<stdio.h>
int main(){
    int a , b , c;
    printf("Enter the 3 numbers\n");
    scanf("%d %d %d", &a ,&b ,&c);
    if(a>b){
        if(a>c){
            printf("greatest number is a : %d\n",a);
        }
    } else if(b>c){
        printf("greatest number is b : %d\n",b);
    } else{
        printf("greatest number is c : %d\n",c);
    }
    return 0;
}