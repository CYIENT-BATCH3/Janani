1.start
2.define macro for finding square
3.printning the result

#include <stdio.h>
#define square(num) (num*num)//defining macro
int main()
{
    int num;//declaring num
    printf("enter a number\n");
    scanf("%d",&num);//reading number
    printf("\nthe square of %d is %d",num,square(num));//printning the square
    return 0;
}