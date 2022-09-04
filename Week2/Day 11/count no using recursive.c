count no of digits in a given number using recursive
#include <stdio.h>

int noOfDigits(int n1); //declaration function
int ctr=0;
int main()
{
    int n1,ctr;
    printf("count the digit of a given number:\n");
    printf("----------------\n");
    printf("input a number:");
    scanf("%d",&n1);
    ctr=noOfDigits(n1); //fun call
    printf("the number of digit in the number is:%d\n\n",ctr);
    return 0;
}
int noOfDigits(int n1)
{
    if(n1!=0)
    {
        ctr++;
        noOfDigits(n1/10);
    }
return ctr;
    
}