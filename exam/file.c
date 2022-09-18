//Write a c program to read file contents and display on console
/*
1.start
2.using file pointer read the contents of the file
3.print the content on the console
*/
#include<stdio.h>//including header file
int main()
{
setbuf(stdout,NULL);//for printing the output in the console
char ch;//declaring variable
FILE *fp=fopen(__FILE__,"r");//declaring file pointer and opening the current executing file using __FILE__ macro
ch=fgetc(fp);//reading the contents in the file
do{
putchar(ch);//printning the character
	ch=fgetc(fp);//reading the next character

}while(ch!=EOF);//iterates upto EOF
fclose(fp);//closing file

}