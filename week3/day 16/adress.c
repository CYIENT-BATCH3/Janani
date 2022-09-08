#include <stdio.h>

void main() {
    int a=10,b=23,c=34;
    int *p1;
    int **p2;
    int ***p3;
    p1=&a;
    p2=&p1;
    p3=&p2;
    printf("\n%d",a);//value of variable
    printf("\n%d",*p1);//value of a
    printf("\n%d",p1);//address of a
    printf("\n%d",*p2);//address of p1
    printf("\n%d",**p2);//value of p1
    printf("\n%d",***p3);//value of p1
    printf("\n%d",**p3);//address of p1..
    return 0;
}