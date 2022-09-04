FUNCTION WITH NO RETURN AND NO ARG:
// Online C compiler to run C program online
#include <stdio.h>
#define pi 3.15 //global declaration
void sum() //name of  sum function
{
    int x=10,y=20; //local variable
    printf("add ans:%d\n",x+y);

}
void mul()//name of mul function
{
     int x=10,y=20; //local variable
    printf("mul ans:%d\n",x*y);
}
void sub()//name of  sub function
{
     int x=10,y=20; //local variable
    printf("sub ans:%d\n",x-y);
}
void dif()//name of  dif function
{
     int x=10,y=20; //local variable
    printf("dif ans:%d\n",x/y);
}
void main() {
  sub();
   sum();
   mul();
   dif();
}
