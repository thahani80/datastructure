#include<stdio.h>
void search(int a[50],int key, int n)
{
	int z=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("key %d found at location %d\n",key,i);
			z=1;
			break;
		}
	}
	if(z==0)
		printf("key not found");
	
}
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
	printf("\nenter the elements to search :\t");
	scanf("%d",&key);
	search(a,key,lim);
	
	return 0;
}
