PRINT NAME ADDRESS AND VALUE
#include <stdio.h>
const int MAX=4;
int main() {
    char *names[]={
        "monday",
        "tuesday",
        "wednesday",
        "thursday"
    };
    int i=0;
    for(i=0;i<MAX;i++)
    {
        printf("values of name[%d] =%u--%s\n",i,names[i],names[i]);
    }
    return 0;
}