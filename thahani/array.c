#include<stdio.h>
int main()
{
	int n,a[50],sum=0;
	printf("enter the number");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
	for(int j=0;j<=n;j++)
		{
			sum=sum+a[j];
		}
	}
	printf("sum is :%d",sum);
}
