ADRESS OF VARIABLES:
#include <stdio.h>

int main() {
    int *p,number=50;
    int *p1,number1=150;
    p=&number; //stores the address of number varaible
    p1=&number1; //store the address of number varaible
    printf("address of p variable i %u\n",p); //p contain the address of the number
    printf("value of p varaible is %d \n",*p); //as we know that * i used to dereference
    printf("\n%d",*p+*p1);
    //*p++;
    printf("\n value of p varaible is %d",*++p); //p contains the address of the number
    return 0;
}