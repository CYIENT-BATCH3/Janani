SWAP WITHOUT THIRD VARIABLE
#include <stdio.h>
int a,b; //global variable
void swap()
{
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swap a=%d,b=%d",a,b);
    
    
}
int main() {
    
    
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    printf("before swap a=%d,b=%d",a,b);
    swap(); //calling function
    

    return 0;
}