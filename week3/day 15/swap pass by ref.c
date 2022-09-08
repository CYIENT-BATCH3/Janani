SWAP TWO NUMBER USING PASS BY REFERENCE:
#include <stdio.h>
//fun declaration
void swap(int*,int*);
int main() {
    //function call
    int a,b,*p,*q;
    printf("entre the value a:");
    scanf("%d",&a);
    printf("enter the value b:");
    scanf("%d",&b);
    p=&a;
    q=&b;
    swap(&a,&b);
    return 0;
}
//fun defintion
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("%d %d",*a,*b);
}