strcat without
#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100]="good";
    char str2[100]="morning";
    char  string[100];
    int count=0,i,length1,length2;
  
    printf("Enter the string -1:\n");
    puts(str1);
    //scanf("%s", str1);
    printf("Enter the string -2:\n");
    puts(str2);
    length1=strlen(str1);
    printf("LENGTH OF FIRST STRING IS:%d\n",length1);
    length2=strlen(str2);
    printf("LENGTH OF SECOND STRING IS:%d\n",length2);
   // scanf("%s", str2);*/
    for(i=0;i<length2;i++)
    {
        str1[length1+i]=str2[i];
       
    
    }
    printf("\nconcatinate of string is :%s\n",str1);

    }