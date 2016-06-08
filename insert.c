#include <stdio.h>
 
int main()
{
   int arr[50],pos,val,i,n;
 
   printf("Enter number of elements in an array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (i = 0; i < n; i++)
	{
	      scanf("%d", &arr[i]);
	}
 
   printf("Enter the location where you want to insert an element\n");
   scanf("%d", &pos);
 
   printf("Enter the value you want to add\n");
   scanf("%d", &val);
 
   for (i = n - 1; i >= pos - 1; i--)
	{	
	   arr[i+1] = arr[i];
	}
	   arr[pos-1] = val;
	   printf("The Resultant array is\n");
 
   for (i = 0; i <= n; i++)
	{
	      printf("%d\n", arr[i]);
 	}	
   return 0;
}
