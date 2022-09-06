1.ENTER FIRST AND LAST NAME USINF STRING:
#include <stdio.h>

int main() {
    char fname[15];//intialize the first name
    char lname[15];//intialize the second name
    printf("Enter first name: "); //print the name
    scanf("%s", fname); //read the first name
     printf("Enter last name: ");
    scanf("%s", lname);
    printf("Your name is %s\n", fname); //print the fname
    printf("Your name is %s\n", lname);
    
    return 0;
}
