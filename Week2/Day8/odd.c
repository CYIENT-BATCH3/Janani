#include <stdio.h>

int main() {
    int i, num;
    printf("enter the number:");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
        i++;
    }

    return 0;
}