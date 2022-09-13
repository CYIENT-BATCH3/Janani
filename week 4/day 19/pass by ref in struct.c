#include <stdio.h>
struct numbers//declaring structure
{
    int num1;//declaring variable
    float num2;//declaring variable
    float add,diff;//declaring float data type
    
};
    void function(struct numbers *a);//functiontion prototype 
    int main()
{
    struct numbers n;//declaring structure variable
    printf("enter two numbers");
    scanf("%d %f",&n.num1,&n.num2);//reading  inputs
    function(&n);//calling the function using pass by value   method
   
    printf("\nsum of two numbers = %f",n.add);//finding sum of two variables
    printf("\ndifference of two numbers = %f",n.diff);//finding difference of two variables
    return 0;
    
} 
void function(struct numbers *a)//defining function
{
    a->add=a->num1+a->num2;//finding sum
    a->diff=a->num1-a->num2;//finding difference

    
}