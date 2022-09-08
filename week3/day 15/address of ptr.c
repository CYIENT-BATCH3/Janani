PRINT THE ADDRESS OF POINTER:
#include <stdio.h>

int main() {
     int a=3;//declaring variable
    float b=6;//declaring variable
    char ch='a';//declaring varible
    int *p1=&a;//declaring pointer
    float *p2=&b;//declaring pointer
    char *p3=&ch;//fdeclaring pointer
    printf("\n value of a %d",*p1);//
    printf("\n value of b %f",*p2);
    printf("\n value of ch %c",*p3);
    printf("\naddress of a %p",p1);
    printf("\naddress of b is%p",p2);
    printf("\naddress of ch %p",p3);
 
  return 0;
}
