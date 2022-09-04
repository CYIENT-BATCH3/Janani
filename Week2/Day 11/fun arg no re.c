FUNCTION WITH RETURN AND NO ARG:
#include <stdio.h>
float sum(float,float);//global declaration

int main() {
float x,y,z; //declaration function
printf("entre the values x and y:"); //entre the values
scanf("%f%f",&x,&y); //scan the value
z=sum(x,y); //print the sum
printf("\noutput from sum %f",z); //output from sum
}
float sum(float a,float b) //name of float sum
{
    printf("sum is %f",a+b); 
    return(a+b);
}