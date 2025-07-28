#include<stdio.h>
#include<string.h>
int main(){
char str[] = "Faizan";
char *ptr = str;
  
int length = strlen(str);

printf("String in reverse order :");
for (int i = length; i >= 0 ; i--)
{
    printf("%c",*(ptr + i));
}

    return 0;
}