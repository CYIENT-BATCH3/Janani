FACTOIAL USING FUNCTION:
#include <stdio.h>

    int factorial(); //function prototype
    int main()
    {
        int fact;
        fact=factorial();
        printf("factorial is %d",fact);
    }
    int factorial()
    {
        int num,fact=1; //decalaring  variables
        printf("enter the number:");
        scanf("%d",&num);//read num
        for(int i=1;i<=num;i++)
        {
            fact=fact+i; //finding fact
        }
        return fact;
    }
