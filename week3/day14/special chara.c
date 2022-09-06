alpahbets,count digit,special character:
/*ALGORITHM
s-1:Give the string value and initialize count
s-2:Now with the help of while loop (strlen(st)!='\0'
S-3:Now if str==NULL then count gets increamented
s-4:Now with the help of printf statement print the count value*/

#include <stdio.h>
#include <string.h>
 
void main()
{
    char str[200];
    int alp,digit,splch,i;
    alp=digit=splch=i=0;
    printf("Enter the string:\n");
    scanf("%[^\n]s", str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

printf("NUMBER OF ALPHABETS IN GIVEN STRING ARE: %d\n",alp);
printf("NUMBER OF DIGITS IN GIVEN STRING ARE: %d\n",digit);
printf("NUMBER OF SPECIAL CHARACTERS IN GIVEN STRING ARE: %d\n",splch);
}
