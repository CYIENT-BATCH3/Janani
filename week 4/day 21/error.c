#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("D:\\mytext.txt","r"); //open file in read mode
	if(fp==NULL)
	{
		printf("file not found");
	}
	else
	{
		fprintf(fp,"%s","welcome"); //writing the file
	if(ferror(fp));

	printf("error occured");
	}
	fclose(fp);
	return 0;
}