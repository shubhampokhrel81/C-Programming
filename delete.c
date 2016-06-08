#include<stdio.h>
int main()
{
   int del[100], pos, i, n;
 
   printf("Enter number of elements in an array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for ( i = 0 ; i < n ; i++ )
	{
	      scanf("%d", &del[i]);
	} 
   printf("Enter the position where you want to delete the element\n");
   scanf("%d", &pos);
 
   if ( pos >= n+1 )
	{
	      printf("Deletion is not possible.\n");
	}
   else
   {
      for ( i = pos - 1 ; i < n - 1 ; i++ )
	{ 
        	del[i] = del[i+1];
 	}
      printf("The required resultant array is\n");
 
      for( i = 0 ; i < n - 1 ; i++ )
	{        
 		printf("%d\n", del[i]);
   	}
 
   return 0;
}
}
