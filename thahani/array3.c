#include<stdio.h>
int sum(int arr[50],int n);
{
	int z=0,i;
	for(i=0;i<n;i++)
	{
		z=z+arr[i];
	}
	return z;
}
	int main()
{
	int z=0,n,i;
	int arr[5];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	if(n>0 && n<=5)
	{
		printf("Enter the elements");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	z=sum(arr,n);
	printf("result=%d",z);
	}
	else
	{
		printf("error\n");
	}
return 0;
}

		
