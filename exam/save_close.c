*
1.start
2.read the contents
3.strore the contents in an array
4.write the content in file
*/

#include<stdio.h>
int main()
{
	setbuf(stdout,NULL);
	FILE *fp=fopen("C:\\Users\\re69829\\Downloads\\ask.txt","w");//declaring file pointer and opening file for write mode
       if(fp==NULL)//checking if the file is found or not
          {
          printf("file not found");
          }
       else
       {
	      char as[60];//declaring string
	      printf("enter the content to write\n");
	      scanf("%[^\n]s",as);//using selective scanf read string
	      fprintf(fp,"%s",as);//using fprintf printning the contents in the file
        fclose(fp);//closing file

       }
}