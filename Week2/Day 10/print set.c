PRINT THE VALUES AND SET VALUES:
#include <stdio.h>

int main() {
    int b[]={1,2,3,4,5,6,7,8,9};
    char a[]={'A','B','C','D','E','F','G','H'};
    for(int i=0;i<8;i++)
    {
        printf("\n character are:%c",a[i]);
    }
    for(int i=0;i<9;i++)
    {
        printf("\n integers are:%d",b[i]);
    }
puts("*********");
    printf("correspomding value:%d",b[6]);
    if(b[6]==7)
    puts("value of 7");
    else
    puts("value not found");

    return 0;
}