FACTORIAL USING DO WHILE
#include <stdio.h>

int main() {
    int n,i,fact;
    fact=1;i=1;
    printf("enter the number:");
    scanf("%d",&n);
    do
    {
        fact=fact*i;
        i++;
    }while(i<=n);
    printf("factorial of num %d is %d",n,fact);
    return 0;
}