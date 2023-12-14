#include <stdio.h>

void sort(int ar[],int n) //function for sorting
{ 
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]>ar[j])
			{
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
}

void merg(int ar1[],int n1,int ar2[],int n2,int ar3[])
	{
		int i,j;
		for(i=0;i<n1;i++)
			ar3[i]=ar1[i];
		i=n1;
		for(j=0;j<n2;j++)
		{
			ar3[i]=ar2[j];
			i=i+1;
		}
		
	}

int main ()
{
	int ar1[50], ar2[50],ar3[100], n1, n2, n3, i;
	printf ("enter the no of elements <50 in array 1 : "); //input array 1
	scanf ("%d", &n1);
	if (n1 <= 50)
	{
		printf ("\nenter the elements in array 1 : ");
		for (i = 0; i < n1; i++)
		{
			scanf ("%d", &ar1[i]);
		}
		printf ("enter the no of elements in array 2 : "); //input array 2
		scanf ("%d", &n2);
		if (n2 <= 50)
		{
			printf ("\nenter the elements in array 2 : ");
			for (i = 0; i < n2; i++)
			{
				scanf ("%d", &ar2[i]);
			}

			
			printf ("\nArray 1 :\t"); //Printing array 1
			for (i = 0; i < n1; i++) 
			{
				printf ("%d\t", ar1[i]);
			}

			printf ("\nArray 2 :\t"); //Printing array 2
			for (i = 0; i < n2; i++) 
			{
				printf ("%d\t", ar2[i]);
			}

			
			sort(ar1,n1); //sort Array 1
			
			printf ("\n\nSorted Array 1 :\t"); //Printing sorted array 1
			for (i = 0; i < n1; i++)
			{
				printf ("%d\t", ar1[i]);
			}

			
			sort(ar2,n2); //sort Array 2

			
			printf ("\nSorted Array 2 :\t"); //Printing Sorted array 2
			
			for (i = 0; i < n2; i++)
			{
				printf ("%d\t", ar2[i]);
			}

			
			merg(ar1,n1,ar2,n2,ar3); //merging  Array 
			n3=n1+n2;
			
			sort(ar3,n3);//sorting merged Array 

			printf ("\n\nmerged Array  :\t"); //Printing merged array 3
			//printf("%d\n%d\n",n1,n2);
			
			for (i = 0; i < n1+n2; i++)
			{
				printf ("%d\t", ar3[i]);
			}
			printf("\n");
		}
		else
		printf ("array 2 is excedd the limit 50\n");
	}
	else
	printf ("Array 1 excedd the limit 50\n");
	return 0;
}
