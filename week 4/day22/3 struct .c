#include<stdio.h>
#include<string.h>
#include"stddec.h"
#include"stddef.h"
struct student
{
              int age;
              char name[10];
};
struct employee
{
              int id;
              char peru[10];
};
struct sensor
{
              int x;
              int y;
};
int main()
{
struct student record;
struct employee details;
struct sensor axis;
record.age=23;
strcpy(record.name,"rubi");
//record.name[10]="rubi";
details.id=2022;
strcpy(details.peru,"janani");
//details.peru[10]="janani";
axis.x=50;
axis.y=40;
display(record.name,record.age);
display1(details.peru,details.id);
display2(axis.x,axis.y);
}
