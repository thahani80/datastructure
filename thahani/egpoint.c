#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num=10;
	printf("The value is num is: %d \n", num);
	printf("The address of num is: %p \n", &num);

	int *ptr;
	ptr=&num;
	
	printf("The value of num is: %d through pointer\n", *ptr);
	printf("The address of num is: %p through pointer\n", ptr);
	
	int *q;
	q=(int *)malloc(sizeof(int));
	*q=50;
	printf("The value of num is: %d through pointer\n", *q);
	printf("The address of num is: %p through pointer\n", q);
	return 0;
}
