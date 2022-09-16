#include<stdio.h>
#include<stdlib.h>
int main()
{
              int ch;
              FILE *fptr;   //declaring file pointer to bring the file from ram to rom
              if((fptr=fopen("currentprogram.txt","r"))==NULL)  //checking if fptr is null then it should print file not found
              {
              printf("VISIBLE ERROR DETECTED . CANNOT OPEN THE FILE!");
              exit(1);  //if file is not found then it directly exits from the program
}
              while(1)
              {
                           ch=fgetc(fptr);  //it reads the characters in the file
                           if(ch=='*')   //if fgetc reaches end of the file then it breaks
                                         break;
                           printf("%c",ch);  //printing the characters
              }
              fclose(fptr);   //after performing the operation we must close the file
              return 0;
}
