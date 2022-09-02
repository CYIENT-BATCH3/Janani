SUM OF N NATURAL NUMBER USING ARRAY:
#include <stdio.h>

int main() {
    int a[100],i,n,sum=0;
    printf("enter the numbers:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
printf("%d",sum,a[i]);
    return 0;
}