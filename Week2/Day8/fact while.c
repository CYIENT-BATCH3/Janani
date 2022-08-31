FACTORIAL USING WHILE
#include <stdio.h>

int main() {
    int n,i,fact;
    fact=1;i=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial of num %d is %d",n,fact);
    

    return 0;
}