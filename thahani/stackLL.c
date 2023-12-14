#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};

struct node*header=NULL;

void insert_at_front(int item)
{
	
	struct node*newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	newnode->data=item;
	if(header==NULL)
	{

	//for the first node
	
		newnode->link = NULL;
		header=newnode;
	}
	
	
	//for the subsequent node

	else
	{
	
		newnode->link=header;
		header=newnode;
	}
	
}
