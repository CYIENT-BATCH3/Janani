//program to print emplyoee id and name
#include <stdio.h>

struct employe //struct varaiable
{
    int emp_id; //employee id
    char name[20];
   
};
int main() {
    struct employe s1;
    scanf("%d",&s1.emp_id);//scan the id
    scanf("%s",&s1.name);
   
    printf("id number:%d\n",s1.emp_id);//print the id
    
    printf("emplyee name:%s\n",s1.name);
    
    return 0;
}