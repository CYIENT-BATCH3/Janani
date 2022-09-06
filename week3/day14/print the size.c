print the size of string:
#include <stdio.h>
//declare and intialize string
   char str[]="WELLDONE";
   char str1[50]="WELLDONE";
   char str2[]={'W','E','L','L','D','O','N','E','\0'};
   char str3[14]={'W','E','L','L','D','O','N','E','\0'};
   char fname[6],lname[4];
int main() {
    //gets(fname);
    //scanf("%s",lname);
    printf("%d\n",sizeof(str));
    printf("%d\n",sizeof(str1));
    printf("%d\n",sizeof(str2));
    printf("%d\n",sizeof(str3));
    
    printf("%s\n",lname);
    printf("%s\n",fname);
    

    return 0;
}