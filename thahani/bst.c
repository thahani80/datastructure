#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *lchild;
	int key;
	struct node *rchild;
};
		
struct node *root = NULL;

void insert(int item)
{

	struct node* new;
	struct node* ptr = root;
	struct node* ptr1 = NULL;
	int flag = 0;

	new = (struct node*)malloc((sizeof(struct node)));
	new->lchild = NULL;
	new->key = item;
	new->rchild = NULL;

	while((ptr != NULL) && (flag == 0))
	{
		if(item < ptr->key)
		{
			ptr1 = ptr;
			ptr = ptr->lchild;
		}
		else if(item > ptr->key)
		{
		
			ptr1 = ptr;
			ptr = ptr->rchild;
			
		}
		else
		{
			if(item == ptr->key)
			{
				flag = 1;
				printf("Wrong input \n");
			}
		}
	}

	if(root == NULL)
	{
		root = new;
	}
	else
	{
		if(flag != 1)
		{
			if(item < ptr1->key)
			{
				ptr1->lchild = new;
			}
			else
			{
				ptr1->rchild = new;
			}
		}
	}
}

void inorder(struct node *ptr)
{
	if(ptr != NULL)
	{
	
		inorder(ptr->lchild);
		printf(" %d ", ptr->key);
		inorder(ptr->rchild);
		
	}
	
}

void preorder(struct node *ptr)
{
	if(ptr != NULL)
	{
		printf(" %d ", ptr->key);
		preorder(ptr->lchild);
		preorder(ptr->rchild);
		
	}
	
}

void postorder(struct node *ptr)
{
	if(ptr != NULL)
	{
		
		postorder(ptr->lchild);
		postorder(ptr->rchild);
		printf(" %d ", ptr->key);
		
	}
	
}

void search(int item)
{
	struct node *ptr = root;

	int flag = 0;
	
	while((ptr != NULL) && (flag == 0))
	{

		if(item < ptr->key)
		{
			ptr = ptr->lchild;
		}
		else if(item > ptr->key)
		{
		
			ptr = ptr->rchild;
			
		}
		else
		{
			if(item == ptr->key)
			{
				flag = 1;
			}
		}
		
	}
	if (flag == 1)
	{
		printf("\n Key found \n");
	}
	else
	{
		printf("\n Key not found \n");
	}
}

struct node*minimum(struct node*ptr)
{
     while(ptr->lchild!=NULL)
          ptr=ptr->lchild;

     return(ptr);
}

struct node*successor(struct node*ptr)
{
     if(ptr->rchild!=NULL)
          return(minimum(ptr->rchild));
     return(ptr);

}

void delete(int item)
{

     struct node* ptr = root;
	struct node* ptr1 = NULL;
	int flag = 0;
     while((ptr != NULL) && (flag == 0))
	{
		if(item < ptr->key)
		{
			ptr1 = ptr;
			ptr = ptr->lchild;
		}
		else if(item > ptr->key)
		{
		
			ptr1 = ptr;
			ptr = ptr->rchild;
			
		}
		else
		{
			if(item == ptr->key)
			{
				flag = 1;
				
			}
		}
	}

     if((ptr->lchild == NULL) && (ptr->rchild==NULL))
     {
          if(ptr== ptr1->lchild)
               
                    ptr1->lchild=NULL;
          else
               ptr->rchild=NULL;

          free(ptr);
     }
     else   //3:  2 child node
     {
          if((ptr->lchild != NULL) && (ptr->rchild != NULL))
          {
          	int temp;
               struct node *succr;
               succr=successor(ptr);
               temp = succr->key;
               delete(temp);
               ptr->key = temp;
          }
          else //case 2: 1 child
          {
          	int temp;
  		if(ptr->rchild !=NULL)
  		{
          		temp=ptr->rchild->key;
          		delete(temp);
          		ptr->key=temp;
          	}
          	else
          	{
          		temp=ptr->lchild->key;
          		delete(temp);
          		ptr->key=temp;
          	}
          }
     }

}
int main()
{
	insert(5);
	insert(4);
	insert(7);
	insert(6);
	insert(8);
	insert(12);
	insert(10);


	inorder(root);
	delete(5);

	search(6);
	search(3);

	postorder(root);
	preorder(root 
	printf("\n");
	
	inorder(root);
	struct node*succr=successor(root);
	printf("\nsuccessor of root is:%d\n",succr->key);
	
	inorder(root);
}ntf("\n");
