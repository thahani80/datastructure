#include<stdio.h>

void modifyAry(int newAry[5],int index,int num)
{
	newAry[index]=num;

}


int main()
{
	int arr[5]={10,20,30,40,50,},i;
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
		modifyAry(arr,2,100);
		printf("\n");

		for(i=0;i<5;i++)
		{
			printf("%d",arr[i]);
		
		}
return 0;
}
