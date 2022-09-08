SWAP TWO NUMBER USING PASS BY VALUE:
#include <stdio.h>
//fun declaration
void swap(int,int);
int main() {
    //function call
    
    swap(5,2);
    return 0;
}
//fun defintion
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}