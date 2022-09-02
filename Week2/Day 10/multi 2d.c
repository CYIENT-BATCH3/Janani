MULTI DIMENSION :
#include <stdio.h>

int main() {
    int arr[4][4],i,j,r=4,c=4,sum=0;
    printf("enter the element:");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        puts("/n");
        for(j=0;j<c;j++)
        {
            printf("%d\t",sum=sum+arr[i][j]);
            if(i-j==0||i-j==1)
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
