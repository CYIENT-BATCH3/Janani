FUNCTION WITH RETURN AND NO ARG:
#include <stdio.h>

int sum() ;// global declaration function
int main()
{
    int a; //intialization
    a=sum(); //calling funcion
    printf("add is: %d",a);
}
int sum() //name of function
{
    int a,b;
    printf("enter the number a and b:"); //enter the values
    scanf("%d%d",&a,&b); //scan the values
    return (a+b);
}  