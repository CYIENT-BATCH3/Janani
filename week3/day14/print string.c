print the string:
#include <stdio.h>

   //declare and intialize string
   char str[]="WELLDONE";
   char str1[50]="WELLDONE";
   char str2[]={'W','E','L','L','D','O','N','E','\0'};
   char str3[14]={'W','E','L','L','D','O','N','E','\0'};
   char fname[6],lname[4];
   int main() {
   //print string
   printf("1-%s\n",str);
   printf("2-%s\n",str1);
   printf("3-%s\n",str2);
   printf("4-%s\n",str3);

    return 0;
}