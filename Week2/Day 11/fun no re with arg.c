#include <stdio.h>
#define pi 3.15 //global declaration
int x,y; // global variable
void sum(int op1,int op2);//declaration function with aruguments
void diff();//declaration function
int main() {
    printf("entre the value of op1 and op2:");
    scanf("%d%d",&x,&y);
    sum(x,y);//calling function with aruguments
    diff();//calling function
}
void sum(int op1,int op2) //name of function for sum
{
    printf("\n sum ans is %d",op1+op2);
}
void diff()//name of function for sub
{
    sum(x,y);//calling function with arugments
    
    printf("\n sub ans is:%d",x-y);
}
