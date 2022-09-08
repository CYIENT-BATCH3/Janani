//PRINT NUMBER OF VALUES:
#include <stdio.h>
void result(int *a,int *b,int *c,int *d);
int main() {
    int x,y,z,r;
    printf("enter the value of:");
    scanf("%d %d %d %d",&x,&y,&z,&r);
     result(&x,&y,&z,&r);
    return 0;
}
void result(int* a,int* b,int* c,int* d)
{
    printf("output:%d %d %d %d",*a,*b,*c,*d);
}