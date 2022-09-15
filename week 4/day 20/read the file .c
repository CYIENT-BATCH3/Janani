//program to read the file till   *(astrics) and printing the content upto *

1.start
2.open file
3.print contents of the file  upto *
4.close the file


#include<stdio.h>
#include<stdlib.h>//including stdlib.h for exit()
int main()
{
	setbuf(stdout,NULL);
char ch;//declaring variable
FILE *fp=fopen("C:\\Users\\re69829\\Downloads\\file_lo.txt","r");//declaring file pointer and assigning a file to it
ch=fgetc(fp);//assigning character from file
if(fp==NULL)//checking the value of pointer
{
printf("file not found");
exit(1);//terminating from the program if an error occurs
}

do{
	if(ch != '*')//checking if the character is not *
	{
		printf("%c",ch);//printning character
	ch=fgetc(fp);//assigning character from file
	}
	else
		break;//break if * found

}while(ch!=EOF);//iterates upto EOF
fclose(fp);//closing the file

}