//Program to Merge two one-d array
#include<stdio.h> 
int main()
	{	
	int i,j,m,n;
	printf("Enter number of elements of first array\n");
	scanf("%d",&m); 
	int a[m];

	printf("Enter elements of first array\n");
	for(i=0;i<m;i++)
		{
			scanf("%d", &a[i]);
		}

	printf("Enter number of elements of second array\n"); 
	scanf("%d",&n); 	
	int b[n];
	int c[m+n];	
	
	printf("Enter elements of second array\n"); 
	for(i=0;i<n;i++)
		{
			scanf("%d", &b[i]); 
		}
	for(i=0; i<m; i++) {
		c[i]=a[i]; 
	}
	j=i; 
	for(i=0; i<n; i++) {
		c[j]=b[i];
		j++; 
	}
	printf("The resulting array is:\n"); 
	for(i=0; i<m+n; i++)
		{
			printf("%d\t", c[i]); 
		}

}
