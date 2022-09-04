SWAP USING FUNCTION:
#include <stdio.h>
int a,b,temp; //global variable
void swap()
{
    
    temp=a;
    a=b;
    b=a;
    printf("\nafter swap a=%d,b=%d",a,b);
    
    
}
int main() {
    
    
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    printf("before swap a=%d,b=%d",a,b);
    swap(); //calling function
    

    return 0;
}