ADD MATRIX USING 2D ARRAY:
#include <stdio.h>

int main() {
    int a[4][4],i,j,m,n,sum=0;
    printf("enter the rows and columns :");
    scanf("%d %d",&m,&n);
    printf("enter the array elements:");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    sum=sum+a[i][j];
    printf("sum of the array elements:%d",sum);
    return 0;

}