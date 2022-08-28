Implement and-or gate:

#include<stdio.h>

int main(){
    int a,b;
    puts("enter first value either 0 or 1 is =  ");//taking input
    scanf("%d",&a);//assigning to variable
    puts("enter first value either 0 or 1 is =  ");//taking second input
    //gets(b);
     scanf("%d",&a);//assigning second variable
    (a&&b)?puts("\n value for AND gate is : 1"):puts("\nvalue AND and gate is : 0");//for AND gate
     (a||b)?puts("\nvalue for OR gate is : 1"):puts("\nvalue for OR gate is :0");//for OR gate
      !(a)?printf("\nvalue for NOT gate is : %d",a);//for NOT gate
      !(b)?printf("\nvalue for NOT gate is : %d",b);//for NOT gate
        
    return 0;
}