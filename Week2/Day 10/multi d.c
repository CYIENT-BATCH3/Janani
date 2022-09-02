MULTI DIMENSION ARRAY:
#include<stdio.h>
int
main ()
{
  int arr[10][20];		// deaclaring two dimensional array
  int n, m, i, j, sum = 0;
  printf ("ENTER THE NUMBERS\n");
  scanf ("%d%d", &n, &m);	// taking inputs from keyboard for number of rows and column
  printf ("ENTER THE ARRAY ELEMENTS\n");
  for (i = 0; i < n; i++)	// first for loop to read elements in row
    {
      for (j = 0; j < m; j++)	// second for loop is to read elements in column
	{
	  scanf ("%d", &arr[i][j]);

	}
    }
  printf ("ARRAY ELEMENTS ARE\n");
  
  for (i = 0; i < n; i++)  //printing row elements in array
    {
      puts ("\n");
      for (j = 0; j < m; j++)   //printing column in array
	{
	  printf ("%d\t", arr[i][j]);
	  if(i==j)                 // condition to check diagonal element
	  {
	      sum +=arr[i][j];     // formula to sum diagonal element
	      //printf("%d\n",sum);
	  }
	  
	}
	
   
    }
    
    printf("\nSUM OF DIAGONAL ELEMENTS:%d\n",sum);

}