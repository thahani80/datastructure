#include <stdio.h>
int front=-1,rear=-1,q[3],size;
void enq(int item)
{
if (rear==-1 && front==-1)
	{
	front=rear=0;
	q[rear]=item;
	}
else if(front==((rear+1)%size))
	{
	printf("queue is full\n");
	}
else	{
	rear=(rear+1)%size;
	q[rear]=item;
	} 
}
void deq()
{
if(front==-1 && rear==-1)
	{
	printf("queue is empty\n");
	}
else if(front==rear)
	{
	printf("the deleted item is %d\n",q[front]);
	front=rear=-1;
	}
else
	{
	printf("the deleted item is %d\n",q[front]);
	front=((front+1)%size);
	}
}

void disp()
{
int i=front;
if (front==-1 && rear==-1)
	{
	printf("queue empty\n");
	}
else
	{
	printf("---queue elements---\n");
	for(i=front;i!=rear;i=(i+1)%size)
		{
			printf("%d\n",q[i]);
		}
	printf("%d\n",q[rear]);
	}
}

int main()
{
int n;
int item;
printf("enter the size of the queue(max 3)\n");
scanf("%d",&size);
if(size<=3 && size>1)
	{
	while(1)
		{
		printf("---basic queue---\n0)exit\n1)enqueue\n2)dequeue\n3)display\n ");
		scanf("%d",&n);
		if (n==0)
			{
			printf("you are exited\n");
			break;
			}
		else if (n==1)
			{
			printf("enter the item\n");
			scanf("%d",&item);
			enq(item);
			}
		else if (n==2)
			{
			deq();
			}
		else if (n==3)
			{
			disp();
			}
		else
			{
			printf("your operation is invalid\n");
			}
		}
	
}
return 0;
}

