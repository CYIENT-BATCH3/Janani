#include<stdio.h>
#include<float.h>
//declaring structure 
struct de{
    //taking some data types
    long int a;
    char b[40];
    float c;
    
}addition;
int main(){
    printf("enter name : \n");//taking input
    scanf("%s",addition.b);//assigning to variable
    printf("enter phone number : ");//taking num from user
    scanf("%ld",&addition.a);//assigning to variable
    printf("\n enter salary : ");//taking salary value from user
    scanf("%f",&addition.c);//assigning to variable
    printf("\n ass details is :");
    printf("\n%s",addition.b);//printing output
    printf("\n%ld \n",addition.a);//printing output
    printf(" %f",addition.c);//printing output
    return 0;
}