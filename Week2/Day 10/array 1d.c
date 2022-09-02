WAP TO READ AND PRINT THE ELEMENTS OF ARRAY USING 1D ARRAY
#include <stdio.h>

int main() {
    int a[10],i,n;     //declaration
    printf("enter the number:");    //print the numbers
    scanf("%d",&n);            //scan the number
printf("enter the elements:");
    for(i=0;i<n;i++)      //use for loop 
    scanf("%d",&a[i]);     //scan the elements
    printf("the elements are below:");
    for(i=0;i<n;i++)        //
    printf("\t%d",i,a[i]);
    

    return 0;
}