#include<stdio.h>
int main(void)
{	
	int n, i, pos, m;
	
	printf("Enter number of elements in an array\n");
	scanf("%d" , &n);
	
	int array[n];
	
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	printf("Enter the location where you want to modify en element\n");
	scanf("%d",&pos);
	
	printf("Enter the new value you want to modify\n");
	scanf("%d",&m);

	array[pos-1]=m;

	printf("The resultant array is \n");
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}
