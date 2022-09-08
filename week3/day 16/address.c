PRINT THE VALUE ADDRESS:
#include <stdio.h>

int main() {
    int a[5]={1,2,3,4,5};
    printf("values %u\n",a);
    printf("values %u\n",*a);
    printf("values %u\n",(a+3));
    

    return 0;
}