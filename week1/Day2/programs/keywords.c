WAP to use atleast  5 keywords in c and print some output using the same 
 


#include<stdio.h>                                               //standard input output header file        
int main()
{
    int num;                                                    //declare the variables
    printf("\nenter the number = ");
    scanf("%d",&num);                                           //accept value from user
    switch(num)                                                 //comapre input value to the corresponding weekday value
    {
        case 1 : printf("\nsunday");
        case 2 : printf("\nmonday"); 
        case 3 : printf("\ntuesday"); 
        case 4 : printf("\nwednesday"); 
        case 5 : printf("\nthursday"); 
        case 6 : printf("\nfriday"); 
        case 7 : printf("\nsaturday"); 
        default: printf("\nincorrect input");                   //if user enter values greater than 7 it will print incorrect
    }
}