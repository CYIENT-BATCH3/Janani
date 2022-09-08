SMALL AND BIGGEST NUMBER:
#include <stdio.h>

int main() {
    int *a[]={10,20,30,40};
   int small=a[0];
    int big=a[0];
    for(int i=0;i<4;i++)
    {
        if(big<a[i])
        {
            big=a[i];
        }
        else if(small>a[i])
        {
            small=a[i];
        }
    }
    printf("biggest number%d--%u\n",big,&big);
    printf("smallest number%d\n",small);
}