PRINT THE SERIAL NUMBER:
#include <stdio.h>

int main() {
    // declaration of variables
    char VIN[30];
    
     printf("enter the VIN number:");
     for(int i=0;i<17;i++)
     {
     scanf(" %c",&VIN[i]);
     }
     
         if(VIN[10]=='E')
         {
             printf("the Vehicle has manufactured from EC plant");
         }
         else if(VIN[10]=='H')
         {
          printf("the Vehicle has manufactured from HY plant");   
         }
         else if(VIN[10]=='P')
         {
          printf("the Vehicle has manufactured from PU plant");   
         }
         
     

    return 0;
}