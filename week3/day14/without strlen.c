//wap to find the length without string length
#include <stdio.h>
int main() {
    char ch[100];
    int i,count;
    printf("enter the string:");
    gets(ch);

    for (i = 0; i<ch[i] != '\0'; i++);
    {
        count++;
    }
    
    printf("Length of the string: %d", i);
    return 0;
}