#include<stdio.h>
int main()
{
	int a[50],lim,i,key;
	printf("How many numbers:");
	scanf("%d",&lim);
	printf("Enter numbers :");
	for(i=0;i<lim;i++)
	{	
		scanf("%d",&a[i]);
	}
	printf("Enter array :");
	for(i=0;i<lim;i++)
	{	
		printf("%d\t",a[i]);
	}
