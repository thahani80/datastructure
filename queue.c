#include<stdio.h>
int front,rear,q[10],size;
void enqueue(int item)
{
	if(rear==size-1)
	{
		printf("Queue is full\n");
	}
	else if((rear==-1)&&(front==-1))
	{
		front=rear=0;
		q[rear]=item;
	}
	else
	{
		rear++;
		q[rear]=item;
	}
}
	
void dequeue()
{
	if(front==-1)
	{
		printf("Queue is empty\n");
	}
	else if(front==rear)
	{
		printf("The Deleted item :%d\n",q[front]);
		front=rear=-1;
	}
	else
	{
		printf("the deleted item:%d\n",q[front]);
		front++;
	}
}
void display()
{
	int i,j;
	if(front>=0)
	{
		printf("---Queue Elements---\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",q[i]);
		}
	}
	else
	{
		printf("Queue is empty\n");
	}
}
int main()
{
	int n;
	int item;
	front=-1;
	rear=-1;
	printf("Enter the size of Queue(max 10)\n");
	scanf("%d",&size);
	if(size<=10 && size>1)
	{
		while(1)
		{
			printf("----BASIC QUEUE OPERATION---- \n0)exit\n 1)enqueue\n 2)Dequeue \n3)Display\n\n Enter Choice!!!\n");
			scanf("%d",&n);
			if(n==0)
			{
				printf("BYE BYE !!!\n");
				break;
			}
			else if(n==1)
			{
				printf("Enter item\n");
				scanf("%d",&item);
				enqueue(item);
			}
			else if(n==2)
			{
				dequeue();
			}
			else if(n==3)
			{
				display();
			}
			else
			{
				printf("Wrong Input\n\n");
			}
		}
	}
	else
	{
		printf("Size Issue!!!");
	}

			
	return 0;
}
	
	

