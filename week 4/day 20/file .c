#include<stdio.h>
#include<stdlib.h>
int main()
{
	int val;
	char c[100];
	FILE *fptr;
			if((fptr=fopen(C:\\Users\\re69829\\Desktop\\file.txt))===NULL)
			{
				printf("file not find");
				exit(1);
			}


		fscanf(fptr,"%d",&val);
		printf("%d",(char)val);
		fclose(fptr);
		return 0;

}
