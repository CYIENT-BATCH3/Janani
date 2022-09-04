DIAGONAL PRINT:
#include <stdio.h>
int left(int num,int pos)
{
    int sum1 = (num^(1<<pos));
    return sum1;
}
int main()
{
    int num,pos,sum,i;
    printf("ener the number");
    scanf("%d",&num);
    printf("enter the particular  position to change");
    scanf("%d",&pos);
    sum = left(num,pos);

    for (i=7;i>=0;i--)
    {
        if (sum&(1<<i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf ("\n%d",sum);
}