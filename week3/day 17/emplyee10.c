//program to print emplyoee id and name
#include <stdio.h>

struct employe //struct varaiable
{
    int emp_id; //employee id
    char name[20];
   
};
int main() {
    struct employe s1[10];
    for(int i=0;i<10;i++)
    {
    printf("enter the employee id:");
        scanf("%d",&s1[i].emp_id);//scan the id
   printf("enter the employee name:");
    scanf("%s",s1[].name);
    }
    for(int i=0;i<10;i++)
    {
    printf("id number:%d\n",s1[i].emp_id);//print the id
    
    printf("emplyee name:%s\n",s1[i].name);
    }
    return 0;
}