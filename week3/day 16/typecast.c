TYPE CASTING:
#include <stdio.h>

void main() {
    int a=2;
    float flt=30.78;
    char ch='d';
    double value=
    void *ptr;
    ptr=&ch;
    printf("after typecasting,a=%c\n",*(char *)ptr);
    ptr=&flt;
    printf("after typecasting 2nd,flt=%f",*(float *)ptr);
    return 0;
}