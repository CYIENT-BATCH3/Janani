1.start
2.read array size  & array elements
3.sort array in decending order and ascendin order
4.print the array after sorting
 
#include<stdio.h>
int main()
{
  setbuf(stdout,NULL);
  int size;//declaring variable
  printf("enter the size of the array\n");
  scanf("%d",&size);
  int arr[size];//declaring integer array containing size elements
  printf("\nenter array elements\n");
  for(int i=0;i<size;i++)
  {
	  scanf("%d",&arr[i]);//reading array elements
  }
  printf("\narray before sorting is  ");
  for(int i=0;i<size;i++)
    {
  	  printf("%d ",arr[i]);//printing array
    }

	 for(int i=0;i<size-1;i++)
	 {
		 for(int j=0;j<size-i-1;j++)
		 {
			 if(arr[j]>arr[j+1])//condition for ascending order
			 {
				 //swaping elements if the condition is true
				 int temp=arr[j];
				 arr[j]=arr[j+1];
				 arr[j+1]=temp;

			 }
		 }

	 }
	 printf("\nArray sorted in Ascending order : ");
	 for(int i=0;i<size;i++)
	     {
	   	  printf("%d ",arr[i]);//printing array after sorting
	     }

	 for(int i=0;i<size-1;i++)
		 {
			 for(int j=0;j<size-i-1;j++)
			 {
				 if(arr[j]<arr[j+1])//condition for Descending order
				 {
					 //swaping elements if the condition is true
					 int temp=arr[j];
					 arr[j]=arr[j+1];
					 arr[j+1]=temp;

				 }
			 }

		 }
		 printf("\nArray sorted in Descending order : ");
		 for(int i=0;i<size;i++)
		     {
		   	  printf("%d ",arr[i]);//printing array after sorting
		     }
}