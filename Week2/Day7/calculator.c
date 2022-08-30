CALCULATOR IN SWITCH CASE:
#include <stdio.h>

int main() {
    float num1,num2;
    char op;
    printf("enter the operator(+,-,*,/):");
    scanf("%c",&op);
    printf("enter the numbers:");
    scanf("%f %f",&num1,&num2);
    switch(op)
    {
        case '+' :
        printf("%f+%f=%f",num1,num2,num1+num2);
        break;
        case '-' :
        printf("%f-%f=%f",num1,num2,num1-num2);
        break;
        case '*' :
        printf("%f*%f=%f",num1,num2,num1*num2);
        break;
        case '/' :
        printf("%f/%f=%f",num1,num2,num1/num2);
        break;
        default :
        printf("Error:invalid operator");
    }

    return 0;
}