//pass by address in strct:
#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char name[10];
	float percent;
};
void func(struct student *rec);
int main()
{
	struct student record;
	record.id=1;
	strcpy(record.name,"rubi");
	record.percent=80.6;
	func(&record);
	return 0;
}
void func(struct student *rec)
{
	printf("id is:%d\n",rec->id);
	printf("id is:%s\n",rec->name);
	printf("id is:%f\n",rec->percent);
}
