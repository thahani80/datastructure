#include<stdio.h>
int main()
{	
	int n,a[50],sum=0;
	printf("enter the number of element in array :  ");
	scanf("%d",&n);
	printf("enter the numbers : ");
	for(int i=0;i<n;i++)
		{
		scanf("%d",&a[i]);	
		}
	for(int j=0;j<n;j++)
		{
		sum+=a[j];	
		}
	printf("The sum is : %d\t",sum);
}

