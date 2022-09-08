PRINT RANDOM NUMBER:
#include <stdio.h>

int main() {
   int i;    
    
    printf(" Random Numbers are: \n");   
    for (i = 0; i <5; i++)  
    {  
        printf(" %d\n", rand()%20);  
     }   
    return 0;
}