string add using strcat:
//add two string using strcat
#include <stdio.h>
#include<string.h>
int main() {
    char a[10],b[10];
    printf("enter the string1:");
    scanf("%s",a);
    //gets(a);
    printf("enter the string2:");
    scanf("%s",b);
    //gets(b);
    //strcat(a,b);
    printf("string concatation:%s\n",strcat(a,b));
    return 0;
}