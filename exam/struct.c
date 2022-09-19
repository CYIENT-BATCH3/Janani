/*
start
create structure with three members
input details and print the datas
*/
#include<stdio.h>

struct studentdata//declaring stucture
{
char stu_name[30];//declaring structure member
int stu_id,stu_age;//declaring structure member
};
void print_details(struct studentdata *);//function prototype declaring
void read_data(struct studentdata *s);//function prototype declaring
int main()
{
  setbuf(stdout,NULL);
  struct studentdata s[5];//declaring array of 5 structures

read_data(s);//calling read_data function
print_details(s);//calling print_detailsfunction
}
void read_data(struct studentdata *s)//defining function
{
	for(int i=0;i<5;i++)
	{
     printf("enter student %d name\n",i);
     scanf("%s",s[i].stu_name);//reading name
     printf("enter student %d age\n",i);
     scanf("%d",&s[i].stu_age);//reading age
     printf("enter student %d id\n",i);
     scanf("%d",&s[i].stu_id);//reading id
	}
}
void print_details(struct studentdata *s)//defining function
	{
		for(int i=0;i<5;i++)
		{
	     printf("\nstudent %d name is %s",i+1,s[i].stu_name);//printning name

	     printf("\nstudent %d age is %d",i+1,s[i].stu_age);//printning age

	     printf("\n student %d id is %d\n",i+1,s[i].stu_id);//printning id

		}
}