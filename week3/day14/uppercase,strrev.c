#include<stdio.h>
#include<string.h>
int main()
{
    char str1[200], str2[200];
    
    int i;
    
    printf("Enter the string: ");
    scanf("%s", str1);
    printf("\nString 1 = %s", str1);
    strcpy(str2, str1);
    printf("\nString 2 = %s", str2);
    
    
    
    //lower to upper 
    
    
    for (i = 0; str2[i]!='\0'; i++) 
    {
      if(str2[i] >= 'a' && str2[i] <= 'z') 
      {
         str2[i] = str2[i] -32;
      }
   }
   printf("\nString in Upper Case = %s", str2);
   
   //upper to main
   
 for ( i = 0; i <= strlen (str2); i++)  
 {  
// The ASCII value of A is 65 and Z is 90  
 if (str2[i] >= 65 && str2[i] <= 90)  
 str2[i] = str2[i] + 32; /* add 32 to string character to convert into lower case. */  
 }  
printf ("\nUpper Case to Lower case string : %s", str2);  

    
    
    return 0;
}