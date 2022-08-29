take a 6 digit number as input from the user and reverse the number.make sure that the number does not include a '0' in any one of it's digtits.

#include <stdio.h>

int main()
{
    int num,rev,d1,d2,d3,d4,d5,d6;//declaring integer variables
    printf("enter a 6 digit number excluding ");
    scanf("%d",&num);//reading a 6 digit number
    printf("entered number is");
    d6=num%10;//taking modulas of num
    num=num/10;//deviding the number by 10 for elemenating last digit
    d5=num%10;//taking modulas of num
    num=num/10;//deviding the number by 10 for elemenating last digit
    d4=num%10;//taking modulas of num
    num=num/10;//deviding the number by 10 for elemenating last digit
    d3=num%10;//taking modulas of num
    num=num/10;//deviding the number by 10 for elemenating last digit
    d2=num%10;//taking modulas of num
    num=num/10;//deviding the number by 10 for elemenating last digit
    d1=num%10;//taking modulas of num
    num=num/10;//deviding the number by 10 for elemenating last digit
    rev=d6*100000+d5*10000+d4*1000+d3*100+d2*10+d1;//finding the reverse  and assigning to rev
    printf("\nreverse of the number is %d",rev);//printing reverse of that number
}