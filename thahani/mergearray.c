#include<stdio.h>
int main()
{
	int n1,n2,n3;
	int a[100], b[100], c[200];
	printf("Enter the size of first array:");
	scanf("%d",&n1);
	printf("Enter the array elements:");
	for(int i=0; i<n1; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the size of second array:");
	scanf("%d",&n2);
	printf("Enetr the array elements:");
	for(int i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
		n3=n1+n2;
	}
		for(int i=0; i<n1; i++)
		{	
			c[i]=a[i];
		}
		for(int i=0; i<n2; i++)
		{
			c[i+n1]=b[i];
		}
		printf("the merged array:");
		for(int i=0; i<n3; i++)
		{
			printf("%d\t",c[i]);
		}
		printf("\n final array after sorting:");
		for(int i=0;i<n3;i++)
		{	
			int temp;
			for(int j=i+1; j<n3; j++)
			{	
				if(c[i]>c[j])
				{
					temp=c[i];
					c[i]=c[j];
					c[j]=temp;
				}
			}
		}
		for(int i=0; i<n3; i++)
		{
			printf("%d",c[i]);
		}
	return 0;
	}