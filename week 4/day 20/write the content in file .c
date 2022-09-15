//printing the contents in the file

1.start
2.read the contents
3.strore the contents in an array
4.write the content in file 


#include<stdio.h>
int main()
{
	setbuf(stdout,NULL);
	FILE *fp=fopen("C:\\Users\\re69829\\Downloads\\write.txt","w");//declaring file pointer and opening file for write mode
	char as[60];//declaring string
	scanf("%[^\n]s",as);//using selective scanf read string
	fprintf(fp,"%s",as);//using fprintf printning the contents in the file 

}