IF ELSEIF:
#include <stdio.h>

int main()
{
   int marks;
   printf("enter the marks:");
   scanf("%d",&marks);
   if(marks>=70&&marks<=80)
   {
       printf("distinction");
   }
   else if(marks>=60&&marks<=70)
   {
       printf("first class");
   }
   else if(marks>=50&&marks<=60)
   {
       printf("second class");
   }
   else if(marks>=35&&marks<=40)
   {
       printf("average");
   }
   else
   {
       printf("fail");
   }
   return 0;
}
