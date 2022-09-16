#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	fp=fopen("D:\\mytext.txt","r"); //open file in read mode
	if(ferror(fptr)!=0)

		printf("error occured");
		putc('T',fptr);
	if(ferror(fptr)!=0);

	printf("error occured");

	fclose(fptr);
	return 0;
}
